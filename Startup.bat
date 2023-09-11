@echo off

:: Editable Variable
set "PROJECT_NAME=Beatemup_Project"
set UE_PATH="\Program Files\Epic Games\UE_5.0\Engine\Binaries\Win64\UnrealEditor-Win64-DebugGame.exe"
set PROJECT_PATH="%~dp0Beatemup_Project.uproject"
:: Script
Title Starting %PROJECT_NAME%..
echo Starting %PROJECT_NAME%..

start "" %UE_PATH% %PROJECT_PATH%
echo %PROJECT_PATH%
pause