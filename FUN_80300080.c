
void FUN_80300080(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  
  iVar11 = 1;
LAB_8030009c:
  puVar9 = (undefined8 *)(param_1 + 4);
  puVar6 = (undefined8 *)&DAT_a0000400;
  do {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6 = puVar6 + 8;
  } while (puVar6 != (undefined8 *)0xa0100000);
  puVar6 = (undefined8 *)&LAB_80031000;
  do {
    while( true ) {
      if (*(byte *)puVar9 != 0) break;
      *puVar6 = *(undefined8 *)((int)puVar9 + 1);
      puVar9 = (undefined8 *)((int)puVar9 + 9);
      puVar6 = puVar6 + 1;
    }
    uVar7 = (uint)*(byte *)puVar9 << 0x18 | 0x800000;
    puVar9 = (undefined8 *)((int)puVar9 + 1);
    while( true ) {
      uVar8 = uVar7 << 1;
      if (-1 < (int)uVar7) {
        *(byte *)puVar6 = *(byte *)puVar9;
        if ((int)uVar8 < 0) {
          puVar6 = (undefined8 *)((int)puVar6 + 1);
          puVar9 = (undefined8 *)((int)puVar9 + 1);
        }
        else {
          uVar8 = uVar7 << 2;
          *(byte *)((int)puVar6 + 1) = *(byte *)((int)puVar9 + 1);
          if ((int)uVar8 < 0) {
            puVar6 = (undefined8 *)((int)puVar6 + 2);
            puVar9 = (undefined8 *)((int)puVar9 + 2);
          }
          else {
            uVar8 = uVar7 << 3;
            *(byte *)((int)puVar6 + 2) = *(byte *)((int)puVar9 + 2);
            if ((int)uVar8 < 0) {
              puVar6 = (undefined8 *)((int)puVar6 + 3);
              puVar9 = (undefined8 *)((int)puVar9 + 3);
            }
            else {
              uVar8 = uVar7 << 4;
              *(byte *)((int)puVar6 + 3) = *(byte *)((int)puVar9 + 3);
              if ((int)uVar8 < 0) {
                puVar6 = (undefined8 *)((int)puVar6 + 4);
                puVar9 = (undefined8 *)((int)puVar9 + 4);
              }
              else {
                uVar8 = uVar7 << 5;
                *(byte *)((int)puVar6 + 4) = *(byte *)((int)puVar9 + 4);
                if ((int)uVar8 < 0) {
                  puVar6 = (undefined8 *)((int)puVar6 + 5);
                  puVar9 = (undefined8 *)((int)puVar9 + 5);
                }
                else {
                  uVar8 = uVar7 << 6;
                  *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar9 + 5);
                  if ((int)uVar8 < 0) {
                    puVar6 = (undefined8 *)((int)puVar6 + 6);
                    puVar9 = (undefined8 *)((int)puVar9 + 6);
                  }
                  else {
                    pbVar1 = (byte *)((int)puVar9 + 6);
                    uVar8 = uVar7 << 7;
                    puVar9 = (undefined8 *)((int)puVar9 + 7);
                    *(byte *)((int)puVar6 + 6) = *pbVar1;
                    puVar6 = (undefined8 *)((int)puVar6 + 7);
                  }
                }
              }
            }
          }
        }
        uVar8 = uVar8 << 1;
      }
      uVar7 = uVar8;
      if (uVar7 == 0) break;
      bVar2 = *(byte *)puVar9;
      puVar4 = (undefined8 *)
               ((int)puVar6 + ((bVar2 & 0xf0) * -0x10 - (uint)*(byte *)((int)puVar9 + 1)));
      if (puVar4 == puVar6) {
        iVar11 = iVar11 + -1;
        if (iVar11 == 0) {
          FUN_803002a0();
          FUN_803002d0(0x80031000,0x4c000);
          return;
        }
        goto LAB_8030009c;
      }
      if ((bVar2 & 0xf) == 0) {
        pbVar1 = (byte *)((int)puVar9 + 2);
        puVar9 = (undefined8 *)((int)puVar9 + 3);
        iVar3 = *pbVar1 + 0x11;
LAB_80300230:
        puVar10 = (undefined8 *)((int)puVar6 + iVar3);
        *(byte *)puVar6 = *(byte *)puVar4;
        puVar5 = (undefined8 *)((int)puVar6 + 1);
        do {
          puVar4 = (undefined8 *)((int)puVar4 + 1);
          puVar6 = (undefined8 *)((int)puVar5 + 1);
          *(byte *)puVar5 = *(byte *)puVar4;
          puVar5 = puVar6;
        } while (puVar6 != puVar10);
      }
      else {
        puVar9 = (undefined8 *)((int)puVar9 + 2);
        if ((bVar2 & 0xf) != 1) {
          iVar3 = (bVar2 & 0xf) + 1;
          goto LAB_80300230;
        }
        *(byte *)puVar6 = *(byte *)puVar4;
        *(byte *)((int)puVar6 + 1) = *(byte *)((int)puVar4 + 1);
        puVar6 = (undefined8 *)((int)puVar6 + 2);
      }
    }
  } while( true );
}

