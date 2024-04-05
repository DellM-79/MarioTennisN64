
void FUN_a4000ad0(byte *param_1)

{
  uint uVar1;
  uint *unaff_s5_lo;
  
  uVar1 = *unaff_s5_lo;
  MI_INIT_MODE = 0x1000;
  *param_1 = (byte)((uVar1 & 0x40) >> 6) | (byte)((uVar1 & 0x4000) >> 0xd) |
             (byte)((uVar1 & 0x400000) >> 0x14) | (byte)((uVar1 & 0x80) >> 4) |
             (byte)((uVar1 & 0x8000) >> 0xb) | (byte)((uVar1 & 0x800000) >> 0x12);
  return;
}

