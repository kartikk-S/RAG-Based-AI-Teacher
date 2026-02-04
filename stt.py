import whisper

model=whisper.load_model("large-v2")

result=model.transcribe(audio="audios/1_output.mp3", language="hi", task="translate", word_timestamps=False)

print(result["text"])