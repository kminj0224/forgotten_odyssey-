/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001637fc  Symbol: CCParallaxNode */

/* cocos2d::CCParallaxNode::CCParallaxNode() */

undefined8 __thiscall cocos2d::CCParallaxNode::CCParallaxNode(CCParallaxNode *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 in_r1;
  float extraout_s0;
  float extraout_s1;
  CCParallaxNode *local_18;
  undefined4 local_14;
  
  local_18 = this;
  local_14 = in_r1;
  CCNode::CCNode((CCNode *)this);
  *(int *)this = *(int *)(DAT_00163850 + 0x16380e) + 8;
  CCPoint::CCPoint((CCPoint *)(this + 0x100));
  puVar1 = (undefined4 *)malloc(0xc);
  *puVar1 = 0;
  pvVar2 = malloc(0x14);
  puVar1[1] = 5;
  puVar1[2] = pvVar2;
  *(undefined4 **)(this + 0xfc) = puVar1;
  CCPoint::CCPoint((CCPoint *)&local_18,extraout_s0,extraout_s1);
  *(CCParallaxNode **)(this + 0x100) = local_18;
  *(undefined4 *)(this + 0x104) = local_14;
  return CONCAT44(local_18,this);
}


