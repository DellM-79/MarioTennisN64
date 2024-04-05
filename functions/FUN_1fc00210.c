
int FUN_1fc00210(uint param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  if (param_2 == 0) {
    param_2 = param_3;
  }
  FUN_1fc00624(param_1,(uint)param_2,&local_4,&local_8);
  iVar1 = local_4 - local_8;
  if (local_4 - local_8 == 0) {
    iVar1 = local_8;
  }
  return iVar1;
}

