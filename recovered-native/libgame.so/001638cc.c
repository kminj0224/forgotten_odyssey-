/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001638cc  Symbol: visit */

/* cocos2d::CCParallaxNode::visit() */

void cocos2d::CCParallaxNode::visit(void)

{
  CCNode *in_r0;
  int iVar1;
  undefined4 uVar2;
  CCPoint *in_r2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  float extraout_s0;
  float extraout_s1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  undefined auStack_30 [4];
  undefined4 local_2c;
  undefined auStack_28 [4];
  undefined4 local_24;
  CCPoint aCStack_20 [12];
  
  absolutePosition();
  iVar1 = CCPoint::CCPointEqualToPoint((CCPoint *)&local_48,(CCPoint *)(in_r0 + 0x100),in_r2);
  if (iVar1 == 0) {
    for (uVar5 = 0; uVar2 = local_48, uVar5 < **(uint **)(in_r0 + 0xfc); uVar5 = uVar5 + 1) {
      piVar3 = *(int **)(uVar5 * 4 + (*(uint **)(in_r0 + 0xfc))[2]);
      (**(code **)(*piVar3 + 0x14))(local_40,piVar3);
      uVar2 = __mulsf3(uVar2,local_40[0]);
      uVar2 = __subsf3(uVar2,local_48);
      (**(code **)(*piVar3 + 0x1c))(local_38,piVar3);
      __addsf3(uVar2,local_38[0]);
      uVar2 = local_44;
      (**(code **)(*piVar3 + 0x14))(auStack_30,piVar3);
      uVar2 = __mulsf3(uVar2,local_2c);
      uVar2 = __subsf3(uVar2,local_44);
      (**(code **)(*piVar3 + 0x1c))(auStack_28,piVar3);
      __addsf3(uVar2,local_24);
      piVar3 = (int *)(**(code **)(*piVar3 + 0x24))(piVar3);
      pcVar4 = *(code **)(*piVar3 + 0x3c);
      CCPoint::CCPoint(aCStack_20,extraout_s0,extraout_s1);
      (*pcVar4)(piVar3,aCStack_20);
    }
    *(undefined4 *)(in_r0 + 0x100) = local_48;
    *(undefined4 *)(in_r0 + 0x104) = local_44;
  }
  CCNode::visit(in_r0);
  return;
}


