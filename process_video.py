import os
import subprocess

files=os.listdir("viedos")

for file in files:
    print(file)
    tutorial_no=file.split(".mp4")[0].split('#')[1]
    file_name=file.split("_")[0]
    print(tutorial_no, file_name)
    subprocess.run(["ffmpeg", "-i", f"viedos/{file}", f"audios/{tutorial_no}_{file_name}.mp3"])