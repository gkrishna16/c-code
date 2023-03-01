  int A[] = {500, 400, 300, 200, 100};
  int i;
  for (i = 0; i < 5; i++) 
  {
     printf("Address = %d\n", &A[i]);
     printf("Address = %d\n", A+i);
     printf("Value = %d\n", A[i]);
     printf("Value = %d\n", *(A+i));
  }