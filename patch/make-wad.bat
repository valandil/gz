@echo off

echo 45e | gzinject -a genkey -k patch/common-key.bin > nul
gru patch/lua/make-wad.lua %*
del patch\common-key.bin
rmdir /s /q patch\wadextract
