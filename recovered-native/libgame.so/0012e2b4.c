/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012e2b4  Symbol: Draw_Sound_Icon */

/* MainMenuLayer::Draw_Sound_Icon(cocos2d::CCNode*) */

void __thiscall MainMenuLayer::Draw_Sound_Icon(MainMenuLayer *this,CCNode *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CCTexture2D *pCVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  CCPoint *pCVar7;
  char **ppcVar8;
  code *pcVar9;
  undefined8 uVar10;
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar1 = cocos2d::CCNode::getChildByTag(param_1,1);
  if (iVar1 != 0) {
    pcVar9 = *(code **)(*(int *)param_1 + 0xd0);
    uVar2 = cocos2d::CCNode::getChildByTag(param_1,1);
    (*pcVar9)(param_1,uVar2,1);
  }
  iVar1 = cocos2d::CCNode::getChildByTag(param_1,2);
  if (iVar1 != 0) {
    pcVar9 = *(code **)(*(int *)param_1 + 0xd0);
    uVar2 = cocos2d::CCNode::getChildByTag(param_1,2);
    (*pcVar9)(param_1,uVar2,1);
  }
  ppcVar8 = *(char ***)(DAT_0012e4f8 + 0x12e306);
  if (**ppcVar8 == '\0') {
    pCVar3 = (CCTexture2D *)(**(code **)(**(int **)(this + 0x11c) + 0x118))();
    piVar4 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
    pcVar9 = *(code **)(*piVar4 + 0x3c);
    puVar5 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
    uVar2 = __mulsf3(*puVar5,0x3f000000);
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar6 = __mulsf3(*puVar5,0x3f000000);
    uVar2 = __subsf3(uVar2,uVar6);
    __subsf3(uVar2,DAT_0012e4fc);
    iVar1 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
    uVar10 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    pCVar7 = aCStack_30;
  }
  else {
    pCVar3 = (CCTexture2D *)(**(code **)(**(int **)(this + 0x118) + 0x118))();
    piVar4 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
    pcVar9 = *(code **)(*piVar4 + 0x3c);
    puVar5 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
    uVar2 = __mulsf3(*puVar5,0x3f000000);
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar6 = __mulsf3(*puVar5,0x3f000000);
    uVar2 = __subsf3(uVar2,uVar6);
    __subsf3(uVar2,DAT_0012e4fc);
    iVar1 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
    uVar10 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    pCVar7 = aCStack_38;
  }
  (*pcVar9)(piVar4,pCVar7);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar4,1,1);
  if ((*ppcVar8)[1] == '\0') {
    pCVar3 = (CCTexture2D *)(**(code **)(**(int **)(this + 0x124) + 0x118))();
    piVar4 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
    pcVar9 = *(code **)(*piVar4 + 0x3c);
    puVar5 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
    uVar2 = __mulsf3(*puVar5,0x3f000000);
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar6 = __mulsf3(*puVar5,0x3f000000);
    uVar2 = __addsf3(uVar2,uVar6);
    __addsf3(uVar2,DAT_0012e4fc);
    iVar1 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
    uVar10 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    pCVar7 = aCStack_20;
  }
  else {
    pCVar3 = (CCTexture2D *)(**(code **)(**(int **)(this + 0x120) + 0x118))();
    piVar4 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
    pcVar9 = *(code **)(*piVar4 + 0x3c);
    puVar5 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
    uVar2 = __mulsf3(*puVar5,0x3f000000);
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar6 = __mulsf3(*puVar5,0x3f000000);
    uVar2 = __addsf3(uVar2,uVar6);
    __addsf3(uVar2,DAT_0012e4fc);
    iVar1 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
    uVar10 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    pCVar7 = aCStack_28;
  }
  (*pcVar9)(piVar4,pCVar7);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar4,2,2);
  return;
}


