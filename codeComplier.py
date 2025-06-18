#!/usr/bin/python3

import sys
import subprocess
import os


def main():

    file_name = sys.argv[1] if len(sys.argv) > 1 else None

    try:

        if not file_name:
            raise Exception("Error: No file name provided !")

        if not os.path.isfile(file_name):
            raise FileNotFoundError("File not Found !")

        subprocess.run(["g++", file_name], check=True)

        print("File Compilation successful..\n")

        subprocess.run("./a.out", check=True)

    except Exception as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    main()
