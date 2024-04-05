
void FUN_803002a0(void)

{
  bool bVar1;
  ulonglong uVar2;
  
  uVar2 = 0xffffffff80000000;
  do {
    cacheOp(1,uVar2);
    bVar1 = uVar2 < 0xffffffff80001ff0;
    uVar2 = (ulonglong)((int)uVar2 + 0x10);
  } while (bVar1);
  return;
}

