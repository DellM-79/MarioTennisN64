
void FUN_1fc00258(uint param_1,uint *param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c [27];
  uint *puVar3;
  
  uVar8 = *param_2 ^ param_1;
  puVar2 = local_6c;
  do {
    puVar3 = puVar2 + 4;
    puVar2[1] = uVar8;
    puVar2[2] = uVar8;
    puVar2[3] = uVar8;
    *puVar2 = uVar8;
    puVar2 = puVar3;
  } while (puVar3 != local_6c + 0x10);
  lVar13 = 0;
  uVar12 = (longlong)(int)*param_2;
  while( true ) {
    uVar8 = *param_2;
    uVar11 = (ulonglong)(int)uVar8;
    iVar14 = (int)lVar13 + 1;
    lVar13 = (longlong)iVar14;
    uVar1 = param_2[1];
    param_2 = param_2 + 1;
    iVar4 = FUN_1fc00210(0x3ef - iVar14,uVar11,lVar13);
    local_6c[0] = iVar4 + local_6c[0];
    local_6c[1] = FUN_1fc00210(local_6c[1],uVar11,lVar13);
    local_6c[2] = local_6c[2] ^ uVar8;
    iVar4 = FUN_1fc00210(uVar8 + 5,0x6c078965,lVar13);
    local_6c[3] = iVar4 + local_6c[3];
    if (uVar12 < uVar11) {
      local_6c[9] = FUN_1fc00210(local_6c[9],uVar11,lVar13);
    }
    else {
      local_6c[9] = local_6c[9] + uVar8;
    }
    uVar5 = (uint)uVar12 & 0x1f;
    uVar7 = uVar8 >> uVar5 | uVar8 << (0x20 - uVar5 & 0x1f);
    local_6c[4] = local_6c[4] + uVar7;
    local_6c[7] = FUN_1fc00210(local_6c[7],
                               (longlong)(int)(uVar8 << uVar5 | uVar8 >> (0x20 - uVar5 & 0x1f)),
                               lVar13);
    if (uVar11 < (ulonglong)(longlong)(int)local_6c[6]) {
      local_6c[6] = local_6c[3] + local_6c[6] ^ uVar8 + iVar14;
    }
    else {
      local_6c[6] = local_6c[4] + uVar8 ^ local_6c[6];
    }
    uVar6 = (uint)uVar12 >> 0x1b;
    uVar5 = uVar8 << uVar6 | uVar8 >> (0x20 - uVar6 & 0x1f);
    local_6c[5] = local_6c[5] + uVar5;
    local_6c[8] = FUN_1fc00210(local_6c[8],
                               (longlong)(int)(uVar8 >> uVar6 | uVar8 << (0x20 - uVar6 & 0x1f)),
                               lVar13);
    if (lVar13 == 0x3f0) break;
    uVar5 = FUN_1fc00210(local_6c[15],(longlong)(int)uVar5,lVar13);
    local_6c[15] = FUN_1fc00210(uVar5,(longlong)
                                      (int)(uVar1 << (uVar8 >> 0x1b) |
                                           uVar1 >> (0x20 - (uVar8 >> 0x1b) & 0x1f)),lVar13);
    uVar7 = FUN_1fc00210(local_6c[14],(longlong)(int)uVar7,lVar13);
    uVar5 = uVar8 & 0x1f;
    local_6c[14] = FUN_1fc00210(uVar7,(longlong)
                                      (int)(uVar1 >> uVar5 | uVar1 << (0x20 - uVar5 & 0x1f)),lVar13)
    ;
    uVar7 = uVar8 >> uVar5 | uVar8 << (0x20 - uVar5 & 0x1f);
    param_4 = (longlong)(int)uVar7;
    local_6c[13] = local_6c[13] + uVar7 +
                   (uVar1 >> (uVar1 & 0x1f) | uVar1 << (0x20 - (uVar1 & 0x1f) & 0x1f));
    local_6c[10] = FUN_1fc00210(local_6c[10] + uVar8,(longlong)(int)uVar1,lVar13);
    local_6c[11] = FUN_1fc00210(local_6c[11] ^ uVar8,(longlong)(int)uVar1,lVar13);
    local_6c[12] = (local_6c[8] ^ uVar8) + local_6c[12];
    uVar12 = uVar11;
  }
  lVar13 = 0;
  puVar2 = local_6c;
  local_7c = local_6c[0];
  local_78 = local_6c[0];
  local_74 = local_6c[0];
  local_70 = local_6c[0];
  do {
    uVar8 = *puVar2;
    uVar12 = (ulonglong)(int)uVar8;
    local_7c = local_7c + (uVar8 >> (uVar8 & 0x1f) | uVar8 << (0x20 - (uVar8 & 0x1f) & 0x1f));
    if (uVar12 < (ulonglong)(longlong)(int)local_7c) {
      local_78 = local_78 + uVar8;
    }
    else {
      local_78 = FUN_1fc00210(local_78,uVar12,lVar13);
    }
    if ((longlong)(int)((uVar8 & 2) >> 1) == (uVar12 & 1)) {
      local_74 = local_74 + uVar8;
    }
    else {
      local_74 = FUN_1fc00210(local_74,uVar12,lVar13);
    }
    if ((uVar12 & 1) == 1) {
      local_70 = local_70 ^ uVar8;
    }
    else {
      local_70 = FUN_1fc00210(local_70,uVar12,lVar13);
    }
    puVar10 = (undefined4 *)param_4;
    lVar13 = (longlong)((int)lVar13 + 1);
    puVar2 = puVar2 + 1;
  } while (lVar13 != 0x10);
  uVar8 = FUN_1fc00210(local_7c,(longlong)(int)local_78,0x10);
  puVar9 = (undefined4 *)lVar13;
  uVar12 = (ulonglong)(int)uVar8;
  uVar11 = (ulonglong)(int)(local_70 ^ local_74);
  FUN_1fc00640(uVar8,local_70 ^ local_74);
  lVar13 = (uVar12 & 0xffffffff) * (uVar11 & 0xffffffff);
  *puVar9 = (int)((ulonglong)lVar13 >> 0x20);
  *puVar10 = (int)lVar13;
  return;
}

