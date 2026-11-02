/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e3520  Symbol: Stop_inventory_Socket_Effect */

/* Market_Store::Stop_inventory_Socket_Effect() */

ulonglong Market_Store::Stop_inventory_Socket_Effect(void)

{
  CCNode *in_r0;
  int *piVar1;
  
  cocos2d::CCNode::getChildByTag(in_r0,0x68);
  cocos2d::CCNode::stopAllActions();
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0x68);
  (**(code **)(*piVar1 + 0xf4))();
  return (ulonglong)CONCAT16(0xff,CONCAT15(0xff,CONCAT14(0xff,in_r0)));
}


