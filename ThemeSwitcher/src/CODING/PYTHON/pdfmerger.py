from PyPDF2 import PdfWriter # type: ignore
import os

merger = PdfWriter()
files = [file for file in os.listdir() if file.endswith(".pdf")]

for pdf in files:
    merger.append(pdf)

merger.write("CHEMISTRY.pdf")
merger.close()