# Import required libraries
import sounddevice as sd
from scipy.io.wavfile import write
import speech_recognition as sr

# Record Audio
def record_audio(filename, duration, freq=44100):
    print("Recording...")
    recording = sd.rec(int(duration * freq), samplerate=freq, channels=2, dtype="int16")  # Use int16 for PCM format
    sd.wait()  # Wait for the recording to finish
    write(filename, freq, recording)  # Save the audio file in PCM format
    print(f"Recording saved as {filename}")

# Transcribe Audio and Save to File
def transcribe_audio(filename, output_text_file):
    recognizer = sr.Recognizer()
    try:
        with sr.AudioFile(filename) as source:
            print("Processing the audio file for transcription...")
            audio_data = recognizer.record(source)
        text = recognizer.recognize_google(audio_data)
        print("Transcription:")
        print(text)

        # Save the transcription to a text file
        with open(output_text_file, "w") as file:
            file.write(text)
        print(f"Transcription saved to {output_text_file}")

    except sr.UnknownValueError:
        print("Could not understand the audio. Try speaking more clearly.")
    except sr.RequestError as e:
        print(f"Error with the recognition service: {e}")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

# Main Function
if __name__ == "__main__":
    audio_filename = "recorded_audio.wav"
    output_text_file = "transcription.txt"
    duration = 10  # Duration in seconds

    # Step 1: Record audio
    record_audio(audio_filename, duration)

    # Step 2: Convert the recorded audio to text and save it
    transcribe_audio(audio_filename, output_text_file)
