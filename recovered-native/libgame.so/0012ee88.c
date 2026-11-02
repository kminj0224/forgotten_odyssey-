/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012ee88  Symbol: update */

/* MainScene::update(float) */

undefined8 __thiscall MainScene::update(MainScene *this,float param_1)

{
  int iVar1;
  undefined4 in_r1;
  
  GamedayLibrary::GamedayLib::sharedLib();
  iVar1 = GamedayLibrary::GamedayLib::GameContinue();
  if (iVar1 == 1) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_0012eec8 + 0x12eea0),1);
  }
  if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_0012eed4 + 0x12eec4),2);
  }
  return CONCAT44(in_r1,this);
}


