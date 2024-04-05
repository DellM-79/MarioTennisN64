
uint FUN_a4000980(int param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  byte local_1;
  
  local_1 = 0;
  lVar6 = 0;
  bVar1 = true;
  lVar3 = 0;
  lVar5 = 0xc800;
  while( true ) {
    if (!bVar1) {
      return 0;
    }
    FUN_a4000a40((uint)lVar6,1);
    FUN_a4000ad0(&local_1);
    FUN_a4000ad0(&local_1);
    iVar2 = (uint)local_1 * 800;
    lVar8 = (longlong)(iVar2 - param_1);
    if (lVar8 < 0) {
      lVar8 = (longlong)(int)(param_1 + (uint)local_1 * -800);
    }
    lVar4 = lVar6;
    if (lVar5 <= lVar8) {
      lVar4 = lVar3;
      lVar8 = lVar5;
    }
    iVar7 = (int)lVar6;
    if (param_1 <= iVar2) break;
    iVar7 = iVar7 + 1;
    lVar6 = (longlong)iVar7;
    if (0x40 < lVar6) break;
    bVar1 = lVar6 < 0x40;
    lVar3 = lVar4;
    lVar5 = lVar8;
  }
  return (uint)((int)lVar4 + iVar7) >> 1;
}

