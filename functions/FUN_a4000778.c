
uint FUN_a4000778(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  do {
    uVar1 = FUN_a4000880();
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 + uVar1;
  } while (iVar2 < 4);
  FUN_a4000a40(uVar3 >> 2,1);
  return uVar3 >> 2;
}

