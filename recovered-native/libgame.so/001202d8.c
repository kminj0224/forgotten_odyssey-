/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001202d8  Symbol: onEnter */

/* Tutorial_Layer::onEnter() */

void __thiscall Tutorial_Layer::onEnter(Tutorial_Layer *this)

{
  int *piVar1;
  CCPoint *pCVar2;
  undefined uVar3;
  bool bVar4;
  int iVar5;
  CCNode *pCVar6;
  int iVar7;
  float fVar8;
  float fVar10;
  CCPoint CVar11;
  CCPoint local_100 [56];
  CCPoint local_c8 [8];
  CCPoint local_c0 [8];
  CCPoint local_b8 [8];
  CCPoint local_b0 [8];
  CCPoint local_a8 [8];
  CCPoint local_a0 [8];
  CCPoint local_98 [8];
  CCPoint local_90 [8];
  CCPoint local_88 [8];
  CCPoint local_80 [8];
  CCPoint local_78 [8];
  CCPoint local_70 [8];
  CCPoint local_68 [8];
  CCPoint local_60 [8];
  CCPoint local_58 [8];
  CCPoint local_50 [8];
  CCPoint local_48 [8];
  CCPoint local_40 [8];
  CCPoint local_38 [8];
  CCPoint local_30 [8];
  CCPoint local_28 [8];
  CCPoint local_20 [12];
  undefined8 uVar9;
  
  (**(code **)(*(int *)this + 0x114))(this,1);
  iVar7 = DAT_0012064c;
  uVar9 = cocos2d::CCLayer::onEnter((CCLayer *)this);
  fVar10 = (float)((ulonglong)uVar9 >> 0x20);
  fVar8 = (float)uVar9;
  iVar7 = iVar7 + 0x1202f6;
  iVar5 = *(int *)(**(int **)(iVar7 + DAT_00120650) +
                   (**(int **)(iVar7 + DAT_00120658) + DAT_00120654) * 4 + 4);
  *(int *)(this + 0x110) = iVar5;
  if (iVar5 == 1) {
    cocos2d::CCPoint::CCPoint(local_100,fVar8,fVar10);
    TutorialWithLayrTouch((char *)this,DAT_00120664 + 0x12032e,true,false,1);
    piVar1 = (int *)(**(code **)(*(int *)this + 0x90))(this);
    (**(code **)(*piVar1 + 0x114))(piVar1,0);
    return;
  }
  if (iVar5 == 2) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_00120668 + 0x12035a));
  }
  if (iVar5 == 3) {
    cocos2d::CCPoint::CCPoint(local_c8,fVar8,fVar10);
    CVar11 = 1;
    iVar5 = DAT_001206a4 + 0x12044c;
    uVar3 = 5;
  }
  else {
    if (iVar5 == 4) {
      cocos2d::CCPoint::CCPoint(local_c0,fVar8,fVar10);
      iVar5 = DAT_001206b0 + 0x12047c;
    }
    else {
      if (iVar5 == 5) {
        cocos2d::CCPoint::CCPoint(local_b8,fVar8,fVar10);
        CVar11 = 0;
        iVar5 = DAT_001206b8 + 0x12049e;
        uVar3 = 5;
        goto LAB_00120450;
      }
      if (iVar5 == 6) {
        cocos2d::CCPoint::CCPoint(local_b0,fVar8,fVar10);
        iVar5 = DAT_001206bc + 0x1204c2;
      }
      else if (iVar5 == 8) {
        cocos2d::CCPoint::CCPoint(local_a8,fVar8,fVar10);
        iVar5 = DAT_001206c0 + 0x1204e2;
      }
      else {
        if (iVar5 == 9) {
          pCVar6 = **(CCNode ***)(iVar7 + DAT_001206c4);
          piVar1 = (int *)cocos2d::CCNode::getChildByTag
                                    (**(CCNode ***)(iVar7 + DAT_001206cc),DAT_001206c8);
          pCVar2 = (CCPoint *)(**(code **)(*piVar1 + 0x38))();
          uVar9 = KG_BG_Hero_Move(pCVar6,*pCVar2);
          cocos2d::CCPoint::CCPoint(local_a0,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
          CVar11 = 0;
          iVar5 = DAT_001206d8 + 0x120526;
          uVar3 = 8;
          goto LAB_00120450;
        }
        if (iVar5 != 10) {
          if (iVar5 == 0xb) {
            bVar4 = false;
            cocos2d::CCPoint::CCPoint(local_90,fVar8,fVar10);
            uVar9 = TutorialWithLayrTouch((char *)this,DAT_001206f0 + 0x120574,true,true,0);
            cocos2d::CCPoint::CCPoint(local_88,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
            uVar9 = TutorialWithLayrTouch((char *)this,DAT_001206f8 + 0x120594,true,true,0);
            cocos2d::CCPoint::CCPoint(local_80,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
            uVar9 = TutorialWithLayrTouch((char *)this,DAT_00120704 + 0x1205b8,true,true,1);
            cocos2d::CCPoint::CCPoint(local_78,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
            CVar11 = 0;
            iVar7 = DAT_00120710 + 0x1205d8;
            uVar3 = 8;
          }
          else if (iVar5 == 0xe) {
            cocos2d::CCPoint::CCPoint(local_70,fVar8,fVar10);
            uVar9 = TutorialWithLayrTouch((char *)this,DAT_0012071c + 0x120602,true,false,0);
            cocos2d::CCPoint::CCPoint(local_68,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
            uVar9 = TutorialWithLayrTouch((char *)this,DAT_00120724 + 0x120622,true,false,0);
            cocos2d::CCPoint::CCPoint(local_60,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
            bVar4 = true;
            CVar11 = 1;
            iVar7 = DAT_00120730 + 0x120646;
            uVar3 = 7;
          }
          else {
            if (iVar5 == 0x10) {
              cocos2d::CCPoint::CCPoint(local_58,fVar8,fVar10);
              iVar7 = DAT_0012085c + 0x120752;
            }
            else if (iVar5 == 0x11) {
              cocos2d::CCPoint::CCPoint(local_50,fVar8,fVar10);
              iVar7 = DAT_00120864 + 0x120772;
            }
            else {
              if (iVar5 != 0x12) {
                if (iVar5 != 0x14) {
                  return;
                }
                cocos2d::CCPoint::CCPoint(local_40,fVar8,fVar10);
                uVar9 = TutorialWithLayrTouch((char *)this,DAT_0012087c + 0x1207bc,true,false,0);
                cocos2d::CCPoint::CCPoint(local_38,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
                uVar9 = TutorialWithLayrTouch((char *)this,DAT_00120884 + 0x1207de,true,false,0);
                cocos2d::CCPoint::CCPoint(local_30,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
                bVar4 = true;
                uVar9 = TutorialWithLayrTouch((char *)this,DAT_00120890 + 0x120800,true,true,1);
                cocos2d::CCPoint::CCPoint(local_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
                uVar9 = TutorialWithLayrTouch((char *)this,DAT_0012089c + 0x120824,true,true,1);
                cocos2d::CCPoint::CCPoint(local_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
                CVar11 = 1;
                iVar7 = DAT_001208a8 + 0x120846;
                uVar3 = 7;
                goto LAB_0012084c;
              }
              cocos2d::CCPoint::CCPoint(local_48,fVar8,fVar10);
              iVar7 = DAT_00120870 + 0x120794;
            }
            CVar11 = 0;
            bVar4 = false;
            uVar3 = 6;
          }
LAB_0012084c:
          TutorialWithLayrTouch((char *)this,iVar7,(bool)uVar3,bVar4,CVar11);
          return;
        }
        cocos2d::CCPoint::CCPoint(local_98,fVar8,fVar10);
        iVar5 = DAT_001206e4 + 0x12054c;
      }
    }
    CVar11 = 0;
    uVar3 = 5;
  }
LAB_00120450:
  TutorialWithLayrTouch((char *)this,iVar5,(bool)uVar3,false,CVar11);
  **(undefined4 **)(iVar7 + DAT_001206a8) = 0x1b;
  return;
}


