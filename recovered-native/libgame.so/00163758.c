/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163758  Symbol: addChild */

/* cocos2d::CCParallaxNode::addChild(cocos2d::CCNode*, unsigned int, cocos2d::CCPoint const&,
   cocos2d::CCPoint const&) */

void __thiscall
cocos2d::CCParallaxNode::addChild
          (CCParallaxNode *this,CCNode *param_1,uint param_2,CCPoint *param_3,CCPoint *param_4)

{
  int *this_00;
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  this_00 = (int *)CCPointObject::pointWithCCPoint(*param_3,param_3[1]);
  (**(code **)(*this_00 + 0x28))(this_00,param_1);
  piVar5 = *(int **)(this + 0xfc);
  while( true ) {
    uVar4 = piVar5[1];
    if (*piVar5 + 1U <= uVar4) break;
    piVar5[1] = uVar4 << 1;
    pvVar1 = realloc((void *)piVar5[2],uVar4 << 3);
    piVar5[2] = (int)pvVar1;
  }
  *(int **)((int)(void *)piVar5[2] + *piVar5 * 4) = this_00;
  CCObject::retain((CCObject *)this_00);
  *piVar5 = *piVar5 + 1;
  local_20 = *(undefined4 *)(this + 0x28);
  local_1c = *(undefined4 *)(this + 0x2c);
  uVar2 = __mulsf3(local_20,*param_3);
  local_20 = __addsf3(uVar2,*param_4);
  uVar2 = __mulsf3(local_1c,param_3[1]);
  local_1c = __addsf3(uVar2,param_4[1]);
  (**(code **)(*(int *)param_1 + 0x3c))(param_1,&local_20);
  iVar3 = (**(code **)(*(int *)param_1 + 0xa0))(param_1);
  CCNode::addChild((CCNode *)this,param_1,param_2,iVar3);
  return;
}


