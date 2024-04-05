
int FUN_a400090c(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *unaff_s4_lo;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_a4000a40(param_1,2);
  iVar4 = 0;
  do {
    unaff_s4_lo[1] = 0xffffffff;
    *unaff_s4_lo = 0xffffffff;
    *unaff_s4_lo = 0xffffffff;
    iVar3 = 0;
    uVar2 = (uint)unaff_s4_lo[1] >> 0x10;
    do {
      if ((uVar2 & 1) != 0) {
        iVar1 = iVar1 + 1;
      }
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 >> 1;
    } while (iVar3 < 8);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  return iVar1;
}

