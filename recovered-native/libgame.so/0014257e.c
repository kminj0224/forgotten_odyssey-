/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014257e  Symbol: cleanup */

/* cocos2d::CCNode::cleanup() */

undefined8 cocos2d::CCNode::cleanup(void)

{
  CCArray *in_r0;
  undefined4 in_r1;
  
  stopAllActions();
  unscheduleAllSelectors();
  arrayMakeObjectsPerformSelector(in_r0,*(_func_void **)(in_r0 + 0x40));
  return CONCAT44(in_r1,in_r0);
}


