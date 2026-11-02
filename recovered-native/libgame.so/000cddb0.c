/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cddb0  Symbol: update */

/* StageSelect::update(float) */

void StageSelect::update(float param_1)

{
  int *in_r0;
  int iVar1;
  New_Notice *this;
  int iVar2;
  
  Main_Call((StageSelect *)in_r0);
  GamedayLibrary::GamedayLib::sharedLib();
  iVar1 = GamedayLibrary::GamedayLib::getRating();
  if (iVar1 == 1) {
    iVar1 = **(int **)(DAT_000cde20 + 0xcddcc);
    iVar2 = **(int **)(DAT_000cde28 + 0xcddd4);
    *(undefined *)(iVar1 + iVar2 * 9 + DAT_000cde24) = 1;
    *(undefined4 *)(iVar1 + iVar2 * 0x24 + DAT_000cde2c + 4) = 1;
    this = (New_Notice *)New_Notice::node();
    (**(code **)(*in_r0 + 0xcc))(in_r0,this,DAT_000cde30,DAT_000cde30);
    New_Notice::noticeWithType(this,(char *)(DAT_000cde34 + 0xcde0c),0x18,0);
    FileSave();
    iVar1 = GamedayLibrary::GamedayLib::sharedLib();
    GamedayLibrary::GamedayLib::setRating(iVar1);
  }
  return;
}


