// Check whether a character is a vowel or consonant.

function Character(char)
{
    if(char == 'A' || char == 'E' || char == 'I' || char == 'O' || char == 'U' ||
       char == 'a' || char == 'e' || char == 'i' || char == 'o' || char == 'u' 
      )
      {
        console.log("It is a vowel!");
      }
      else
      {
        console.log("It is a consonant");
      }
}

Character('A');
Character('h');
Character('o');
Character('L');