/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00121c00  Symbol: Lode_Hero */

/* GameScene::Lode_Hero(int) */

void __thiscall GameScene::Lode_Hero(GameScene *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar7 = DAT_00121ed0 + 0x121c0e;
  if (param_1 == 1) {
    piVar1 = (int *)operator_new(0x11c);
    Hero1::Hero1((Hero1 *)piVar1);
    (**(code **)(*piVar1 + 300))(piVar1);
    uVar8 = (**(code **)(*piVar1 + 0x6c))(piVar1,1);
    pcVar6 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    (*pcVar6)(piVar1,aCStack_40);
    (**(code **)(***(int ***)(iVar7 + DAT_00121edc) + 0xcc))
              (**(int ***)(iVar7 + DAT_00121edc),piVar1,0,1);
    cocos2d::CCObject::release((CCObject *)piVar1);
    **(int ***)(iVar7 + DAT_00121ee0) = piVar1;
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar1,1);
    iVar3 = (**(code **)(*piVar2 + 0xa8))();
    KG_Hero_Draw((CCLayer *)piVar1,(CCNode *)this,1);
    Effect::Effect_Kai(*(Effect **)(this + DAT_00121ee4));
    *(undefined4 *)(*(int *)(iVar3 + 4) + 4) = 1;
    if (*(char *)(**(int **)(iVar7 + DAT_00121ee8) + **(int **)(iVar7 + DAT_00121eec) * 0x6c +
                 DAT_00121ef0) < '\x01') {
      return;
    }
    pcVar4 = (char *)(DAT_00121ef4 + 0x121cbc);
    pcVar5 = (char *)(DAT_00121ef8 + 0x121cbe);
  }
  else if (param_1 == 2) {
    piVar1 = (int *)operator_new(0x11c);
    Hero2::Hero2((Hero2 *)piVar1);
    (**(code **)(*piVar1 + 0x128))(piVar1);
    uVar8 = (**(code **)(*piVar1 + 0x6c))(piVar1,1);
    pcVar6 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    (*pcVar6)(piVar1,aCStack_38);
    (**(code **)(***(int ***)(iVar7 + DAT_00121edc) + 0xcc))
              (**(int ***)(iVar7 + DAT_00121edc),piVar1,0,1);
    cocos2d::CCObject::release((CCObject *)piVar1);
    **(int ***)(iVar7 + DAT_00121ee0) = piVar1;
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar1,1);
    iVar3 = (**(code **)(*piVar2 + 0xa8))();
    KG_Hero_Draw((CCLayer *)piVar1,(CCNode *)this,2);
    Effect::Effect_Rapael(*(Effect **)(this + DAT_00121ee4));
    *(undefined4 *)(*(int *)(iVar3 + 4) + 4) = 2;
    if (*(char *)(**(int **)(iVar7 + DAT_00121ee8) + **(int **)(iVar7 + DAT_00121eec) * 0x6c +
                 DAT_00121efc) < '\x01') {
      return;
    }
    pcVar4 = (char *)(DAT_00121f00 + 0x121d6c);
    pcVar5 = (char *)(DAT_00121f04 + 0x121d6e);
  }
  else if (param_1 == 4) {
    piVar1 = (int *)operator_new(0x11c);
    Hero3::Hero3((Hero3 *)piVar1);
    (**(code **)(*piVar1 + 0x128))(piVar1);
    uVar8 = (**(code **)(*piVar1 + 0x6c))(piVar1,1);
    pcVar6 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    (*pcVar6)(piVar1,aCStack_30);
    (**(code **)(***(int ***)(iVar7 + DAT_00121edc) + 0xcc))
              (**(int ***)(iVar7 + DAT_00121edc),piVar1,0,1);
    cocos2d::CCObject::release((CCObject *)piVar1);
    **(int ***)(iVar7 + DAT_00121ee0) = piVar1;
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar1,1);
    iVar3 = (**(code **)(*piVar2 + 0xa8))();
    KG_Hero_Draw((CCLayer *)piVar1,(CCNode *)this,4);
    Effect::Effect_Reina(*(Effect **)(this + DAT_00121ee4));
    *(undefined4 *)(*(int *)(iVar3 + 4) + 4) = 4;
    if (*(char *)(**(int **)(iVar7 + DAT_00121ee8) + **(int **)(iVar7 + DAT_00121eec) * 0x6c +
                 DAT_00121f08) < '\x01') {
      return;
    }
    pcVar4 = (char *)(DAT_00121f0c + 0x121e1c);
    pcVar5 = (char *)(DAT_00121f10 + 0x121e1e);
  }
  else if (param_1 == 3) {
    piVar1 = (int *)operator_new(0x11c);
    Hero6::Hero6((Hero6 *)piVar1);
    (**(code **)(*piVar1 + 0x128))(piVar1);
    uVar8 = (**(code **)(*piVar1 + 0x6c))(piVar1,1);
    pcVar6 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    (*pcVar6)(piVar1,aCStack_28);
    (**(code **)(***(int ***)(iVar7 + DAT_00121edc) + 0xcc))
              (**(int ***)(iVar7 + DAT_00121edc),piVar1,0,1);
    cocos2d::CCObject::release((CCObject *)piVar1);
    **(int ***)(iVar7 + DAT_00121ee0) = piVar1;
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar1,1);
    iVar3 = (**(code **)(*piVar2 + 0xa8))();
    KG_Hero_Draw((CCLayer *)piVar1,(CCNode *)this,3);
    Effect::Effect_Kris(*(Effect **)(this + DAT_00121ee4));
    *(undefined4 *)(*(int *)(iVar3 + 4) + 4) = 3;
    if (*(char *)(**(int **)(iVar7 + DAT_00121ee8) + **(int **)(iVar7 + DAT_00121eec) * 0x6c +
                 DAT_00121f14) < '\x01') {
      return;
    }
    pcVar4 = (char *)(DAT_00121f18 + 0x121ece);
    pcVar5 = (char *)((int)&DAT_00121ed0 + DAT_00121f1c);
  }
  else {
    if (param_1 != 5) {
      return;
    }
    piVar1 = (int *)operator_new(0x11c);
    Hero7::Hero7((Hero7 *)piVar1);
    (**(code **)(*piVar1 + 0x128))(piVar1);
    uVar8 = (**(code **)(*piVar1 + 0x6c))(piVar1,1);
    pcVar6 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    (*pcVar6)(piVar1,aCStack_20);
    (**(code **)(***(int ***)(iVar7 + DAT_00121fe0) + 0xcc))
              (**(int ***)(iVar7 + DAT_00121fe0),piVar1,0,1);
    cocos2d::CCObject::release((CCObject *)piVar1);
    **(int ***)(iVar7 + DAT_00121fe4) = piVar1;
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar1,1);
    iVar3 = (**(code **)(*piVar2 + 0xa8))();
    KG_Hero_Draw((CCLayer *)piVar1,(CCNode *)this,5);
    Effect::Effect_Mir(*(Effect **)(this + DAT_00121fe8));
    *(undefined4 *)(*(int *)(iVar3 + 4) + 4) = 5;
    if (*(char *)(**(int **)(iVar7 + DAT_00121fec) + **(int **)(iVar7 + DAT_00121ff0) * 0x6c +
                 DAT_00121ff4) < '\x01') {
      return;
    }
    pcVar4 = (char *)(DAT_00121ff8 + 0x121fcc);
    pcVar5 = (char *)(DAT_00121ffc + 0x121fce);
  }
  Hero_Command_Init(1,pcVar4,pcVar5);
  return;
}


