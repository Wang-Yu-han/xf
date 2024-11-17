from cryptography.fernet import Fernet

key = 20246779
with open('key.key', 'wb') as key_file:
    key_file.write(key)

with open('encrypted.txt', 'rb') as plaintext_file:
    plaintext = plaintext_file.read()
cipher = Fernet(key)
encrypted = cipher.encrypt(plaintext)
with open('encrypted.txt', 'wb') as encrypted_file:
    encrypted_file.write(encrypted)
