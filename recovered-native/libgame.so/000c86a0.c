/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c86a0  Symbol: vDrawImage */

/* vDrawImage(cocos2d::CCNode*, char const*, cocos2d::CCPoint, int, int, cocos2d::CCPoint) */

int * vDrawImage(CCNode *param_1,char *param_2,CCPoint param_3,int param_4,int param_5,
                CCPoint param_6)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 uVar3;
  CCPoint local_28;
  int local_24;
  char *local_20;
  undefined auStack_1c [4];
  undefined auStack_18 [4];
  undefined auStack_14 [4];
  
  local_20 = (char *)(*(int *)(DAT_000c8740 + 0xc86b0) + 0xc);
  uVar3 = *(undefined4 *)(DAT_000c8744 + 0xc86b4);
  local_28 = param_3;
  local_24 = param_4;
  if (**(int **)(DAT_000c8748 + 0xc86c0) == 2) {
    FUN_000c84f4(auStack_1c,param_2,*(undefined4 *)(DAT_000c874c + 0xc86ce));
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
  (**(code **)(*piVar2 + 0x74))(piVar2,&stack0x00000008);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,param_5,param_6);
  FUN_001edf58(&local_20);
  FUN_001ed6b8(&local_20);
  return piVar2;
}


