/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cc4e4  Symbol: StageCall */

/* EpisodeChild::StageCall(cocos2d::CCObject*) */

void __thiscall EpisodeChild::StageCall(EpisodeChild *this,CCObject *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
  **(undefined4 **)(DAT_000cc540 + 0xcc4f8) = uVar1;
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog((char *)(DAT_000cc544 + 0xcc500),uVar1);
}


