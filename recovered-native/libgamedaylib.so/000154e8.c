/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000154e8  Symbol: sharedLib */

/* GamedayLibrary::GamedayLib::sharedLib() */

undefined4 GamedayLibrary::GamedayLib::sharedLib(void)

{
  GamedayLib *this;
  GamedayLib **ppGVar1;
  
  ppGVar1 = (GamedayLib **)(DAT_0001550c + 0x154f0);
  if (*ppGVar1 == (GamedayLib *)0x0) {
    this = (GamedayLib *)operator_new(1);
    GamedayLib(this);
    *ppGVar1 = this;
  }
  return *(undefined4 *)(DAT_00015510 + 0x15508);
}


