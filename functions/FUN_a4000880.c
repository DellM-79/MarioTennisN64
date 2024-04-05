
uint FUN_a4000880(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = 0;
  lVar4 = 0;
  lVar5 = 0;
  do {
    if (0x3f < lVar5) {
      return 0;
    }
    iVar1 = FUN_a400090c((uint)lVar5);
    if (0 < (longlong)iVar1) {
      lVar4 = (longlong)((int)lVar4 + (iVar1 - (int)lVar3) * (int)lVar5);
      lVar3 = (longlong)iVar1;
    }
    lVar5 = (longlong)((int)lVar5 + 1);
  } while (lVar3 < 0x50);
  uVar2 = FUN_a4000980((int)lVar4 * 0x16 + -0x370);
  return uVar2;
}

