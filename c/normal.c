while(x<100){
   if(a%2==0){
      parity=0;
   }
   else parity =1;
   switch(parity){
      case 1:printf("1");
      case 2:printf("2");
      default:printf("error");
   }
   x++;
}