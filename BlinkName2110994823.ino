const int dot = 500;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop()
{
   char arr[] = {"-. .. .-.. .- -. .--- .- -."};    //Name is "Nilanjan"
   int arrSize = sizeof(arr)/sizeof(arr[0]);        //Size of the array is calculated
   for(int i=0; i<arrSize;i++)
   {
    if(arr[i]=='.')
    {
      digitalWrite(LED_BUILTIN, HIGH);
      delay( dot);                                  //Maintaining a ratio of 1:3:2 for dot:dash:blank
      digitalWrite(LED_BUILTIN, LOW);
    }
    else if(arr[i]=='-')
    {
      digitalWrite(LED_BUILTIN, HIGH);
      delay( dot*3);
      digitalWrite(LED_BUILTIN, LOW);
    }
    else if(arr[i]==' ')
    {
      delay( dot*2);
      digitalWrite(LED_BUILTIN, LOW);
    }
    delay(200);                                 //Adding delay just to make the low led mode last
   }
}
