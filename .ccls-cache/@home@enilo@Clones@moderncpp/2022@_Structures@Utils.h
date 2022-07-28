#pragma once

enum CharacterCaseType
{
  CC_UPPER_CASE = 0,
  CC_LOWER_CASE,
  CC_EITHER
};

char GetCharacter(const char* prompt, const char* error);
char GetCharacter(const char* prompt, const char* error, const char validInput[], CharacterCaseType charCase);

void ClearScreen();
void WaitForKeyPress();
