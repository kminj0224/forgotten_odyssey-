/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142a10  Symbol: parentToNodeTransform */

/* cocos2d::CCNode::parentToNodeTransform() */

undefined4 * cocos2d::CCNode::parentToNodeTransform(void)

{
  undefined4 *in_r0;
  int in_r1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  CCAffineTransform aCStack_30 [28];
  
  if (*(char *)(in_r1 + 0xf5) != '\0') {
    nodeToParentTransform();
    CCAffineTransformInvert((cocos2d *)&local_48,aCStack_30);
    *(undefined4 *)(in_r1 + 0x9c) = local_48;
    *(undefined4 *)(in_r1 + 0xa0) = uStack_44;
    *(undefined4 *)(in_r1 + 0xa4) = uStack_40;
    *(undefined4 *)(in_r1 + 0xa8) = local_3c;
    *(undefined4 *)(in_r1 + 0xac) = uStack_38;
    *(undefined4 *)(in_r1 + 0xb0) = uStack_34;
    *(char *)(in_r1 + 0xf5) = '\0';
  }
  uVar1 = *(undefined4 *)(in_r1 + 0xa0);
  uVar2 = *(undefined4 *)(in_r1 + 0xa4);
  *in_r0 = *(undefined4 *)(in_r1 + 0x9c);
  in_r0[1] = uVar1;
  in_r0[2] = uVar2;
  uVar1 = *(undefined4 *)(in_r1 + 0xac);
  uVar2 = *(undefined4 *)(in_r1 + 0xb0);
  in_r0[3] = *(undefined4 *)(in_r1 + 0xa8);
  in_r0[4] = uVar1;
  in_r0[5] = uVar2;
  return in_r0;
}


