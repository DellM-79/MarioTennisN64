
/* WARNING: Instruction at (ram,0xa40002d8) overlaps instruction at (ram,0xa40002d4)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bootMain(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint *puVar18;
  uint *puVar19;
  uint local_60 [24];
  
  setCopReg(0,Cause,0,0);
  setCopReg(0,Count,0,0);
  setCopReg(0,Compare,0,0);
  if (RI_SELECT == 0) {
    uVar6 = 0xffffffffa3f80000;
    uVar7 = 0xffffffffa4300000;
    RI_CONFIG = 0x40;
    iVar12 = 8000;
    do {
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    RI_CURRENT_LOAD = 0;
    RI_SELECT = 0x14;
    iVar12 = 4;
    do {
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    RI_MODE = 0xe;
    iVar12 = 0x20;
    do {
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    MI_INIT_MODE = 0x10f;
    _DAT_a3f80008 = 0x18082838;
    _DAT_a3f80014 = 0;
    _DAT_a3f80004 = 0x80000000;
    uVar9 = 0;
    iVar12 = 0;
    puVar10 = &RDRAM_CONFIG;
    lVar17 = 0;
    uVar15 = 0;
    iVar16 = 0;
    iVar14 = 0;
    puVar19 = local_60;
    puVar18 = local_60;
    if (MI_VERSION == 0x1010101) {
      iVar11 = 0x200;
      iVar13 = -0x5c0fc000;
      puVar18 = local_60;
    }
    else {
      iVar11 = 0x400;
      iVar13 = -0x5c0f8000;
    }
    do {
      *(int *)(iVar13 + 4) = iVar12;
      uVar3 = FUN_a4000778();
      if (uVar3 == 0) break;
      *puVar18 = uVar3;
      puVar8 = (undefined4 *)uVar7;
      *puVar8 = 0x2000;
      uVar3 = *puVar10;
      puVar18[1] = (uint)(undefined *)(uVar3 & 0xf0ff0000);
      puVar18 = puVar18 + 2;
      *puVar8 = 0x1000;
      if ((undefined *)(uVar3 & 0xf0ff0000) == &UNK_b0190000) {
        lVar17 = (longlong)((int)lVar17 + 0x8000000);
        uVar15 = uVar15 + 0x200000;
        iVar14 = iVar14 * 2 + 1;
      }
      *puVar8 = 0x2000;
      uVar3 = puVar10[9];
      uVar1 = *puVar10;
      *puVar8 = 0x1000;
      if (((uVar3 & 0xffff) == 0x500) && ((uVar1 & 0x1000000) == 0)) {
        puVar10[6] = 0x101c0a04;
      }
      else {
        puVar10[6] = 0x80c1204;
      }
      iVar12 = iVar12 + 0x8000000;
      puVar10 = (uint *)((int)puVar10 + iVar11 * 2);
      uVar9 = (ulonglong)((int)uVar9 + 1);
    } while (uVar9 < 8);
    *(undefined4 *)((int)uVar6 + 0xc) = 0xc4000000;
    *(undefined4 *)((int)uVar6 + 4) = 0x80000000;
    lVar4 = 0;
    do {
      iVar12 = (int)lVar4;
      if ((undefined *)puVar19[1] == &UNK_b0090000) {
        *(int *)(iVar13 + 4) = (int)lVar17;
        FUN_a4000a40(*puVar19,1);
        uVar15 = uVar15 + 0x100000;
        *(int *)(iVar13 + 4) = iVar16;
      }
      else {
        *(int *)(iVar13 + 4) = iVar16;
        FUN_a4000a40(*puVar19,1);
        iVar16 = iVar16 + 0x8000000;
      }
      puVar19 = puVar19 + 2;
      lVar4 = (longlong)(iVar12 + 1);
    } while (lVar4 < (longlong)uVar9);
    RI_REFRESH = iVar14 << 0x13 | 0x63634;
    _DAT_a0000318 = uVar15 & 0xfffffff;
    iVar12 = -0x80000000;
    setCopReg(0,TagLo,0,0);
    setCopReg(0,TagHi,0,0);
    do {
      uVar9 = (ulonglong)iVar12;
      cacheOp(8,uVar9);
      iVar12 = iVar12 + 0x20;
    } while (uVar9 < 0xffffffff80003fe0);
    iVar12 = -0x80000000;
    do {
      uVar9 = (ulonglong)iVar12;
      cacheOp(9,uVar9);
      iVar12 = iVar12 + 0x10;
    } while (uVar9 < 0xffffffff80001ff0);
  }
  else {
    iVar12 = -0x80000000;
    setCopReg(0,TagLo,0,0);
    setCopReg(0,TagHi,0,0);
    do {
      uVar9 = (ulonglong)iVar12;
      cacheOp(8,uVar9);
      iVar12 = iVar12 + 0x20;
    } while (uVar9 < 0xffffffff80003fe0);
    iVar12 = -0x80000000;
    do {
      uVar9 = (ulonglong)iVar12;
      cacheOp(1,uVar9);
      iVar12 = iVar12 + 0x10;
    } while (uVar9 < 0xffffffff80001ff0);
  }
  puVar5 = &DAT_a40004c0;
  puVar8 = (undefined4 *)&DAT_a0000000;
  do {
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    *puVar8 = uVar2;
    puVar8 = puVar8 + 1;
  } while (puVar5 < (undefined4 *)0xa4000774);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&TLB_REFILL)();
  return;
}

