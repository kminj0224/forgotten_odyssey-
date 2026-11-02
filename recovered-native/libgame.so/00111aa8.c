/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00111aa8  Symbol: Unit_230_Attack_Time */

/* Unit_230_Attack_Time(cocos2d::CCLayer*, _Unit_Stage*, cocos2d::CCNode*) */

undefined4 Unit_230_Attack_Time(CCLayer *param_1,_Unit_Stage *param_2,CCNode *param_3)

{
  bool bVar1;
  undefined uVar2;
  int iVar3;
  CCSprite *pCVar4;
  CCActionInterval *this;
  CCAction *pCVar5;
  undefined4 uVar6;
  CCNode *this_00;
  CCNode **ppCVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  CCNode **ppCVar11;
  CCNode *pCVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  iVar8 = DAT_00111dc0 + 0x111ab6;
  iVar3 = Unit_Attack_Timeing(param_2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar10 = *(int *)(param_2 + 4);
  uVar13 = __extendsfdf2(*(undefined4 *)(iVar10 + 0x3c));
  uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
  uVar14 = __extendsfdf2(*(undefined4 *)(iVar10 + 0x40));
  uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_00111db0,DAT_00111db4);
  uVar9 = (undefined4)((ulonglong)uVar14 >> 0x20);
  iVar3 = __aeabi_dcmpgt((int)uVar13,uVar6,(int)uVar14,uVar9);
  if ((iVar3 == 0) || (*(char *)(iVar10 + 0x2c) != '\0')) {
    uVar14 = __adddf3((int)uVar14,uVar9,DAT_00111db0,DAT_00111db4);
    iVar3 = __aeabi_dcmpgt((int)uVar13,uVar6,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    if (iVar3 == 0) {
      return 0;
    }
    if (*(char *)(iVar10 + 0x2d) != '\0') {
      return 0;
    }
    *(char *)(iVar10 + 0x2d) = '\x01';
    pCVar4 = (CCSprite *)bullet_return(param_1);
    if (pCVar4 == (CCSprite *)0x0) {
      return 0;
    }
    ppCVar11 = *(CCNode ***)(iVar8 + DAT_00111dc4);
    ppCVar7 = *(CCNode ***)(iVar8 + DAT_00111dc8);
    if ((*(int *)(*(int *)(param_2 + 4) + 0x120) == 0) ||
       (iVar3 = Random(0,100), **(int **)(iVar8 + DAT_00111dcc) < iVar3)) {
      pCVar12 = *ppCVar11;
      (**(code **)(*(int *)param_1 + 0x38))(param_1);
      iVar3 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar9 = *(undefined4 *)(iVar3 + 4);
      iVar3 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
      uVar6 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
      uVar6 = __addsf3(uVar9,uVar6);
      uVar13 = __addsf3(uVar6,DAT_00111dd4);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_20,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      iVar3 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
      iVar8 = *(int *)(*(int *)(param_2 + 4) + 4);
      uVar2 = __fixsfsi(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38));
      bVar1 = false;
    }
    else {
      pCVar12 = *ppCVar11;
      (**(code **)(*(int *)param_1 + 0x38))(param_1);
      iVar3 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar9 = *(undefined4 *)(iVar3 + 4);
      iVar3 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
      uVar6 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
      uVar6 = __addsf3(uVar9,uVar6);
      uVar13 = __addsf3(uVar6,DAT_00111dd4);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_28,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      iVar3 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
      iVar8 = *(int *)(*(int *)(param_2 + 4) + 4);
      uVar13 = __extendsfdf2(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38));
      __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_00111db8,DAT_00111dbc);
      uVar2 = __fixdfsi();
      bVar1 = true;
      local_20 = local_28;
      local_1c = local_24;
    }
    pCVar12 = (CCNode *)
              Bullet_Draw(pCVar12,pCVar4,local_20,local_1c,iVar3,iVar8,(bool)uVar2,bVar1,(void *)0x1
                         );
    cocos2d::CCNode::getChildByTag(*ppCVar7,0xe6);
  }
  else {
    *(char *)(iVar10 + 0x2c) = '\x01';
    pCVar4 = (CCSprite *)bullet_return(param_1);
    if (pCVar4 == (CCSprite *)0x0) {
      return 0;
    }
    ppCVar11 = *(CCNode ***)(iVar8 + DAT_00111dc4);
    ppCVar7 = *(CCNode ***)(iVar8 + DAT_00111dc8);
    if ((*(int *)(*(int *)(param_2 + 4) + 0x120) == 0) ||
       (iVar3 = Random(0,100), **(int **)(iVar8 + DAT_00111dcc) < iVar3)) {
      pCVar12 = *ppCVar11;
      (**(code **)(*(int *)param_1 + 0x38))(param_1);
      iVar3 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar9 = *(undefined4 *)(iVar3 + 4);
      iVar3 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
      uVar6 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
      uVar6 = __addsf3(uVar9,uVar6);
      uVar13 = __addsf3(uVar6,DAT_00111dd0);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_30,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      iVar3 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
      iVar8 = *(int *)(*(int *)(param_2 + 4) + 4);
      bVar1 = (bool)__fixsfsi(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38));
      pCVar12 = (CCNode *)
                Bullet_Draw(pCVar12,pCVar4,local_30,local_2c,iVar3,iVar8,bVar1,false,(void *)0x0);
      this_00 = *ppCVar7;
    }
    else {
      pCVar12 = *ppCVar11;
      (**(code **)(*(int *)param_1 + 0x38))(param_1);
      iVar3 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar9 = *(undefined4 *)(iVar3 + 4);
      iVar3 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
      uVar6 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
      uVar6 = __addsf3(uVar9,uVar6);
      uVar13 = __addsf3(uVar6,DAT_00111dd0);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_38,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      iVar3 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
      iVar8 = *(int *)(*(int *)(param_2 + 4) + 4);
      uVar13 = __extendsfdf2(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38));
      __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_00111db8,DAT_00111dbc);
      bVar1 = (bool)__fixdfsi();
      pCVar12 = (CCNode *)
                Bullet_Draw(pCVar12,pCVar4,local_38,local_34,iVar3,iVar8,bVar1,true,(void *)0x0);
      this_00 = *ppCVar7;
    }
    cocos2d::CCNode::getChildByTag(this_00,0xe6);
  }
  this = (CCActionInterval *)cocos2d::CCObject::copy();
  pCVar5 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this);
  cocos2d::CCNode::runAction(pCVar12,pCVar5);
  cocos2d::CCObject::release((CCObject *)this);
  return 0;
}


