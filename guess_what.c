int GuessWhatThisDoesWithoutRunningIt(int x, int y);  

int GuessWhatThisDoesWithoutRunningIt(int x, int y)
{
   int z = (x & y) << 1;
   return (z ? GuessWhatThisDoesWithoutRunningIt(x^y, z) : x^y);
}

