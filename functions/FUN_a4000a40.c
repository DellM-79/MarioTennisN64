
void FUN_a4000a40(uint param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_s5_lo;
  
  uVar1 = param_1 & 0xff ^ 0x3f;
  uVar2 = 0x46000000;
  if (param_2 == 1) {
    uVar2 = 0xc6000000;
  }
  *unaff_s5_lo = uVar2 | (uVar1 & 1) << 6 | (uVar1 & 2) << 0xd | (uVar1 & 4) << 0x14 |
                 (uVar1 & 8) << 4 | (uVar1 & 0x10) << 0xb | (uVar1 & 0x20) << 0x12;
  if (param_2 == 1) {
    MI_INIT_MODE = 0;
  }
  return;
}

