
void FUN_803002d0(uint param_1,ulonglong param_2)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar4;
  int iVar3;
  
  if (0 < (longlong)param_2) {
    if (0x3fff < param_2) {
      uVar2 = 0xffffffff80000000;
      do {
        cacheOp(0,uVar2);
        bVar1 = uVar2 < 0xffffffff80003fe0;
        uVar2 = (ulonglong)((int)uVar2 + 0x20);
      } while (bVar1);
      return;
    }
    uVar4 = param_1 + (int)param_2;
    if (param_1 < uVar4) {
      iVar3 = param_1 - (param_1 & 0x1f);
      do {
        uVar2 = (ulonglong)iVar3;
        cacheOp(0x10,uVar2);
        iVar3 = iVar3 + 0x20;
      } while (uVar2 < (ulonglong)(longlong)(int)(uVar4 - 0x20));
    }
  }
  return;
}

