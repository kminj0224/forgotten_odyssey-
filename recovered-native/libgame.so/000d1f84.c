/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d1f84  Symbol: onEnter */

/* InventoryLayer::onEnter() */

undefined8 InventoryLayer::onEnter(void)

{
  int *in_r0;
  int in_r1;
  undefined8 uVar1;
  int *local_10;
  int local_c;
  
  local_10 = in_r0;
  local_c = in_r1;
  cocos2d::CCLayer::onEnter((CCLayer *)in_r0);
  uVar1 = (**(code **)(*in_r0 + 0x114))(in_r0,1);
  *(CCLayer *)(in_r0 + 0x4c) = (CCLayer)0x0;
  in_r0[0x4d] = -1;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_10,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  in_r0[0x44] = (int)local_10;
  in_r0[0x45] = local_c;
  Lode_File();
  return CONCAT44(local_c,local_10);
}


