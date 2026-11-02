/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c8538  Symbol: vDrawImageRect */

/* vDrawImageRect(cocos2d::CCNode*, char const*, cocos2d::CCRect, cocos2d::CCPoint, int, int) */

int * vDrawImageRect(CCNode *param_1,char *param_2,CCRect param_3,CCPoint param_4,int param_5,
                    int param_6)

{
  char **ppcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  char *local_28;
  char *pcStack_24;
  CCRect CStack_20;
  char *pcStack_1c;
  CCRect local_8;
  CCPoint local_4;
  
  ppcVar1 = &pcStack_24;
  local_28 = (char *)(*(int *)(DAT_000c85d0 + 0xc8548) + 0xc);
  uVar3 = *(undefined4 *)(DAT_000c85d4 + 0xc854c);
  pcStack_24 = param_2;
  CStack_20 = param_3;
  pcStack_1c = (char *)param_4;
  local_8 = param_3;
  local_4 = param_4;
  if (**(int **)(DAT_000c85d8 + 0xc8558) == 2) {
    FUN_000c84f4(ppcVar1,param_2,*(undefined4 *)(DAT_000c85dc + 0xc8566));
    FUN_000bbe6c(&CStack_20,ppcVar1,uVar3);
    FUN_001ee874(&local_28,&CStack_20);
    FUN_001ed6b8(&CStack_20);
  }
  else {
    FUN_000c84f4(&pcStack_1c,param_2,uVar3);
    FUN_001ee874(&local_28,&pcStack_1c);
    ppcVar1 = &pcStack_1c;
  }
  FUN_001ed6b8(ppcVar1);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile(local_28,&local_8);
  (**(code **)(*piVar2 + 0x3c))(piVar2,&stack0x00000008);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,in_stack_00000010,in_stack_00000014);
  FUN_001ed6b8(&local_28);
  return piVar2;
}


