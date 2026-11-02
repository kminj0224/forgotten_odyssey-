/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142a56  Symbol: nodeToWorldTransform */

/* cocos2d::CCNode::nodeToWorldTransform() */

undefined4 * cocos2d::CCNode::nodeToWorldTransform(void)

{
  undefined4 *in_r0;
  int in_r1;
  int *piVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  CCAffineTransform aCStack_30 [28];
  
  nodeToParentTransform();
  for (piVar1 = *(int **)(in_r1 + 0x74); piVar1 != (int *)0x0;
      piVar1 = (int *)(**(code **)(*piVar1 + 0x90))(piVar1,uStack_38,aCStack_30)) {
    nodeToParentTransform();
    CCAffineTransformConcat((cocos2d *)&local_48,(CCAffineTransform *)in_r0,aCStack_30);
    *in_r0 = local_48;
    in_r0[1] = uStack_44;
    in_r0[2] = uStack_40;
    in_r0[3] = local_3c;
    in_r0[4] = uStack_38;
    in_r0[5] = uStack_34;
  }
  return in_r0;
}


