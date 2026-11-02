/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001654b0  Symbol: textHandler */

/* cocos2d::CCTMXMapInfo::textHandler(void*, char const*, int) */

void __thiscall
cocos2d::CCTMXMapInfo::textHandler(CCTMXMapInfo *this,void *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined auStack_24 [4];
  undefined auStack_20 [4];
  undefined auStack_1c [4];
  undefined auStack_18 [4];
  undefined4 local_14 [2];
  
  FUN_001eed40(auStack_18,param_2,auStack_24);
  FUN_001eeb80(auStack_1c,auStack_18,0,param_3);
  FUN_001ed6b8(auStack_18);
  iVar1 = (**(code **)(*(int *)this + 0x5c))(this);
  if (iVar1 != 0) {
    FUN_001eed40(local_14,*(undefined4 *)(this + 0x50),auStack_20);
    FUN_001ee6cc(local_14,auStack_1c);
    FUN_001ed9dc(this + 0x50,local_14[0]);
    FUN_001ed6b8(local_14);
  }
  FUN_001ed6b8(auStack_1c);
  return;
}


