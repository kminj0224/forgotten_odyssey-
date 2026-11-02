/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001e388  Symbol: FUN_0001e388 */

void FUN_0001e388(uint *param_1,undefined4 *param_2)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  switch(*param_2) {
  case 3:
    FUN_0001e2ac(param_1,param_2[1]);
    return;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    goto LAB_0001e4cc;
  case 0x18:
    goto LAB_0001e540;
  case 0x19:
    goto LAB_0001e5b4;
  case 0x1a:
LAB_0001e4cc:
    puVar7 = (undefined *)(DAT_0001ea04 + 0x1e4e5);
    uVar4 = param_1[0x41];
    puVar6 = (undefined *)(DAT_0001ea04 + 0x1e4dc);
    do {
      puVar5 = puVar6 + 1;
      uVar1 = *puVar6;
      if (uVar4 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar3 = 1;
        uVar4 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar3 = uVar4 + 1;
      }
      *(undefined *)((int)param_1 + uVar4 + 4) = uVar1;
      param_1[0x41] = uVar3;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar4 = uVar3;
      puVar6 = puVar5;
    } while (puVar5 != puVar7);
    return;
  case 0x1b:
LAB_0001e540:
    puVar7 = (undefined *)(DAT_0001ea08 + 0x1e559);
    uVar4 = param_1[0x41];
    puVar6 = (undefined *)(DAT_0001ea08 + 0x1e550);
    do {
      puVar5 = puVar6 + 1;
      uVar1 = *puVar6;
      if (uVar4 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar3 = 1;
        uVar4 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar3 = uVar4 + 1;
      }
      *(undefined *)((int)param_1 + uVar4 + 4) = uVar1;
      param_1[0x41] = uVar3;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar4 = uVar3;
      puVar6 = puVar5;
    } while (puVar5 != puVar7);
    return;
  case 0x1c:
LAB_0001e5b4:
    puVar7 = (undefined *)(DAT_0001ea0c + 0x1e5ca);
    uVar4 = param_1[0x41];
    puVar6 = (undefined *)(DAT_0001ea0c + 0x1e5c4);
    do {
      puVar5 = puVar6 + 1;
      uVar1 = *puVar6;
      if (uVar4 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar3 = 1;
        uVar4 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar3 = uVar4 + 1;
      }
      *(undefined *)((int)param_1 + uVar4 + 4) = uVar1;
      param_1[0x41] = uVar3;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar4 = uVar3;
      puVar6 = puVar5;
    } while (puVar5 != puVar7);
    return;
  case 0x1d:
    uVar4 = param_1[0x41];
    if (uVar4 == 0xff) {
      uVar4 = 0;
      *(undefined *)((int)param_1 + 0x103) = 0;
      (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
      uVar3 = 1;
      param_1[0x49] = param_1[0x49] + 1;
    }
    else {
      uVar3 = uVar4 + 1;
    }
    *(undefined *)((int)param_1 + uVar4 + 4) = 0x20;
    param_1[0x41] = uVar3;
    *(undefined *)(param_1 + 0x42) = 0x20;
    FUN_0001e2ac(param_1,param_2[2]);
    return;
  case 0x1e:
    if ((*param_1 & 4) == 0) {
      uVar4 = param_1[0x41];
      if (uVar4 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar3 = 1;
        param_1[0x49] = param_1[0x49] + 1;
        uVar4 = 0;
      }
      else {
        uVar3 = uVar4 + 1;
      }
      *(undefined *)((int)param_1 + uVar4 + 4) = 0x2a;
      param_1[0x41] = uVar3;
      *(undefined *)(param_1 + 0x42) = 0x2a;
      return;
    }
    return;
  case 0x1f:
    uVar4 = param_1[0x41];
    if (uVar4 == 0xff) {
      uVar4 = 0;
      *(undefined *)((int)param_1 + 0x103) = 0;
      (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
      uVar3 = 1;
      param_1[0x49] = param_1[0x49] + 1;
    }
    else {
      uVar3 = uVar4 + 1;
    }
    *(undefined *)((int)param_1 + uVar4 + 4) = 0x26;
    param_1[0x41] = uVar3;
    *(undefined *)(param_1 + 0x42) = 0x26;
    return;
  case 0x20:
    puVar7 = (undefined *)(DAT_0001ea10 + 0x1e6ca);
    uVar4 = param_1[0x41];
    puVar6 = (undefined *)(DAT_0001ea10 + 0x1e6c8);
    do {
      puVar5 = puVar6 + 1;
      uVar1 = *puVar6;
      if (uVar4 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar3 = 1;
        uVar4 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar3 = uVar4 + 1;
      }
      *(undefined *)((int)param_1 + uVar4 + 4) = uVar1;
      param_1[0x41] = uVar3;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar4 = uVar3;
      puVar6 = puVar5;
    } while (puVar5 != puVar7);
    return;
  case 0x21:
    puVar7 = (undefined *)(DAT_0001ea18 + 0x1e7b8);
    uVar4 = param_1[0x41];
    puVar6 = (undefined *)(DAT_0001ea18 + 0x1e7b0);
    do {
      puVar5 = puVar6 + 1;
      uVar1 = *puVar6;
      if (uVar4 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar3 = 1;
        uVar4 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar3 = uVar4 + 1;
      }
      *(undefined *)((int)param_1 + uVar4 + 4) = uVar1;
      param_1[0x41] = uVar3;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar4 = uVar3;
      puVar6 = puVar5;
    } while (puVar5 != puVar7);
    return;
  case 0x22:
    puVar7 = (undefined *)(DAT_0001ea14 + 0x1e746);
    uVar4 = param_1[0x41];
    puVar6 = (undefined *)(DAT_0001ea14 + 0x1e73c);
    do {
      puVar5 = puVar6 + 1;
      uVar1 = *puVar6;
      if (uVar4 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar3 = 1;
        uVar4 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar3 = uVar4 + 1;
      }
      *(undefined *)((int)param_1 + uVar4 + 4) = uVar1;
      param_1[0x41] = uVar3;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar4 = uVar3;
      puVar6 = puVar5;
    } while (puVar5 != puVar7);
    return;
  case 0x23:
    break;
  case 0x24:
    break;
  case 0x25:
    break;
  case 0x26:
    break;
  case 0x27:
    if (*(char *)(param_1 + 0x42) != '(') {
      uVar4 = param_1[0x41];
      if (uVar4 == 0xff) {
        uVar4 = 0;
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar3 = 1;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar3 = uVar4 + 1;
      }
      *(undefined *)((int)param_1 + uVar4 + 4) = 0x20;
      param_1[0x41] = uVar3;
      *(undefined *)(param_1 + 0x42) = 0x20;
    }
    iVar2 = DAT_0001ea1c;
    puVar6 = (undefined *)(DAT_0001ea1c + 0x1e858);
    FUN_0001e2ac(param_1,param_2[1]);
    uVar4 = param_1[0x41];
    do {
      puVar7 = puVar6 + 1;
      uVar1 = *puVar6;
      if (uVar4 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar3 = 1;
        uVar4 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar3 = uVar4 + 1;
      }
      *(undefined *)((int)param_1 + uVar4 + 4) = uVar1;
      param_1[0x41] = uVar3;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar4 = uVar3;
      puVar6 = puVar7;
    } while (puVar7 != (undefined *)(iVar2 + 0x1e85b));
    return;
  case 0x28:
    break;
  case 0x29:
    puVar7 = (undefined *)(DAT_0001ea00 + 0x1e45e);
    uVar4 = param_1[0x41];
    puVar6 = (undefined *)(DAT_0001ea00 + 0x1e454);
    do {
      puVar5 = puVar6 + 1;
      uVar1 = *puVar6;
      if (uVar4 == 0xff) {
        *(undefined *)((int)param_1 + 0x103) = 0;
        (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
        uVar3 = 1;
        uVar4 = 0;
        param_1[0x49] = param_1[0x49] + 1;
      }
      else {
        uVar3 = uVar4 + 1;
      }
      *(undefined *)((int)param_1 + uVar4 + 4) = uVar1;
      param_1[0x41] = uVar3;
      *(undefined *)(param_1 + 0x42) = uVar1;
      uVar4 = uVar3;
      puVar6 = puVar5;
    } while (puVar5 != puVar7);
    FUN_0001e2ac(param_1,param_2[1]);
    uVar4 = param_1[0x41];
    if (uVar4 == 0xff) {
      uVar4 = 0;
      *(undefined *)((int)param_1 + 0x103) = 0;
      (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
      uVar3 = 1;
      param_1[0x49] = param_1[0x49] + 1;
    }
    else {
      uVar3 = uVar4 + 1;
    }
    *(undefined *)((int)param_1 + uVar4 + 4) = 0x29;
    param_1[0x41] = uVar3;
    *(undefined *)(param_1 + 0x42) = 0x29;
    return;
  }
  FUN_0001e2ac();
  return;
}


