/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c85e0  Symbol: vDrawImage */

/* vDrawImage(cocos2d::CCNode*, char const*, cocos2d::CCPoint, int, int, cocos2d::CCPoint, bool) */

int * vDrawImage(CCNode *param_1,char *param_2,CCPoint param_3,int param_4,int param_5,
                CCPoint param_6,bool param_7)

{
  undefined *puVar1;
  int *piVar2;
  CCTexture2D *this;
  undefined4 uVar3;
  CCPoint local_28;
  int local_24;
  char *local_20;
  undefined auStack_1c [4];
  undefined auStack_18 [4];
  undefined auStack_14 [4];
  
  local_20 = (char *)(*(int *)(DAT_000c8690 + 0xc85f0) + 0xc);
  uVar3 = *(undefined4 *)(DAT_000c8694 + 0xc85f4);
  local_28 = param_3;
  local_24 = param_4;
  if (**(int **)(DAT_000c8698 + 0xc8600) == 2) {
    FUN_000c84f4(auStack_1c,param_2,*(undefined4 *)(DAT_000c869c + 0xc860e));
    FUN_000bbe6c(auStack_18,auStack_1c,uVar3);
    FUN_001ee874(&local_20,auStack_18);
    FUN_001ed6b8(auStack_18);
    puVar1 = auStack_1c;
  }
  else {
    FUN_000c84f4(auStack_14,param_2,uVar3);
    FUN_001ee874(&local_20,auStack_14);
    puVar1 = auStack_14;
  }
  FUN_001ed6b8(puVar1);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile(local_20);
  (**(code **)(*piVar2 + 0x3c))(piVar2,&local_28);
  this = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))(piVar2);
  cocos2d::CCTexture2D::setAliasTexParameters(this);
  (**(code **)(*piVar2 + 0x74))(piVar2,&param_7);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,param_5,param_6);
  FUN_001edf58(&local_20);
  FUN_001ed6b8(&local_20);
  return piVar2;
}


