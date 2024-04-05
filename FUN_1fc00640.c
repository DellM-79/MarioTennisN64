
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1fc00640(uint param_1,undefined4 param_2)

{
  int iVar1;
  
  _DAT_bfc007f0 = param_1 & 0xffff | _DAT_bfc007f0 & 0xffff0000;
  do {
  } while ((SI_STATUS & 2) != 0);
  do {
  } while ((SI_STATUS & 2) != 0);
  do {
  } while ((SI_STATUS & 2) != 0);
  do {
    for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    }
  } while ((_DAT_bfc007fc & 0x80) == 0);
  _DAT_bfc007fc = _DAT_bfc007fc | 0x60;
  do {
  } while ((SI_STATUS & 2) != 0);
  _DAT_bfc007f4 = param_2;
                    /* WARNING: Treating indirect jump as call */
  bootMain();
  return;
}

