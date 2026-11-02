/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146f30  Symbol: setString */

/* cocos2d::CCLabelAtlas::setString(char const*) */

undefined8 cocos2d::CCLabelAtlas::setString(char *param_1)

{
  size_t sVar1;
  uint uVar2;
  char *in_r1;
  char *local_20;
  undefined4 local_1c;
  
  local_20 = param_1;
  sVar1 = strlen(in_r1);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x118) + 0x14))();
  if (uVar2 < sVar1) {
    CCTextureAtlas::resizeCapacity(*(CCTextureAtlas **)(param_1 + 0x118),sVar1);
  }
  FUN_001edf58(param_1 + 0x134);
  FUN_001ed9dc(param_1 + 0x134,in_r1);
  (**(code **)(*(int *)param_1 + 0x118))(param_1);
  CCSize::CCSize((CCSize *)&local_20);
  local_20 = (char *)__floatunsisf(sVar1 * *(int *)(param_1 + 0x10c));
  local_1c = __floatunsisf(*(undefined4 *)(param_1 + 0x110));
  (**(code **)(*(int *)param_1 + 0x88))(param_1,&local_20);
  *(size_t *)(param_1 + 300) = sVar1;
  return CONCAT44(local_1c,local_20);
}


