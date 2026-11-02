/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020a538  Symbol: FUN_0020a538 */

/* WARNING: Type propagation algorithm not settling */

uint * FUN_0020a538(int param_1,int param_2)

{
  uint **ppuVar1;
  byte bVar2;
  char cVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  uint *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  pcVar8 = *(char **)(param_1 + 0xc);
  if (*pcVar8 == 'G' || *pcVar8 == 'T') {
    iVar10 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar10 + 0x14;
    if (*pcVar8 == 'T') {
      *(char **)(param_1 + 0xc) = pcVar8 + 1;
      cVar3 = pcVar8[1];
      if (cVar3 == '\0') {
        return (uint *)0x0;
      }
      *(char **)(param_1 + 0xc) = pcVar8 + 2;
      switch(cVar3) {
      case 'C':
        uVar6 = FUN_00209418();
        iVar10 = FUN_00208a84(param_1);
        if ((-1 < iVar10) && (**(char **)(param_1 + 0xc) == '_')) {
          *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
          uVar5 = FUN_00209418(param_1);
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 5;
          puVar4 = (uint *)FUN_00208880(param_1,0xb,uVar5,uVar6);
          return puVar4;
        }
        break;
      case 'D':
        break;
      case 'E':
        break;
      case 'F':
        uVar6 = FUN_00209418();
        puVar4 = (uint *)FUN_00208880(param_1,0xe,uVar6,0);
        return puVar4;
      case 'G':
        break;
      case 'H':
        break;
      case 'I':
        uVar6 = FUN_00209418();
        puVar4 = (uint *)FUN_00208880(param_1,0xc,uVar6,0);
        return puVar4;
      case 'J':
        uVar6 = FUN_00209418();
        puVar4 = (uint *)FUN_00208880(param_1,0x12,uVar6,0);
        return puVar4;
      case 'K':
        break;
      case 'L':
        break;
      case 'M':
        break;
      case 'N':
        break;
      case 'O':
        break;
      case 'P':
        break;
      case 'Q':
        break;
      case 'R':
        break;
      case 'S':
        uVar6 = FUN_00209418();
        puVar4 = (uint *)FUN_00208880(param_1,0xd,uVar6,0);
        return puVar4;
      case 'T':
        *(int *)(param_1 + 0x30) = iVar10 + 10;
        uVar6 = FUN_00209418();
        puVar4 = (uint *)FUN_00208880(param_1,10,uVar6,0);
        return puVar4;
      case 'U':
        break;
      case 'V':
        *(int *)(param_1 + 0x30) = iVar10 + 0xf;
        uVar6 = FUN_00209418();
        puVar4 = (uint *)FUN_00208880(param_1,9,uVar6,0);
        return puVar4;
      case 'W':
        break;
      case 'X':
        break;
      case 'Y':
        break;
      case 'Z':
        break;
      case '[':
        break;
      case '\\':
        break;
      case ']':
        break;
      case '^':
        break;
      case '_':
        break;
      case '`':
        break;
      case 'a':
        break;
      case 'b':
        break;
      case 'c':
        iVar10 = FUN_00209280(param_1,0);
        if (iVar10 == 0) {
          return (uint *)0x0;
        }
        iVar10 = FUN_00209280(param_1,0);
        if (iVar10 == 0) {
          return (uint *)0x0;
        }
        uVar6 = FUN_0020a538(param_1,0);
        puVar4 = (uint *)FUN_00208880(param_1,0x11,uVar6,0);
        return puVar4;
      case 'd':
        break;
      case 'e':
        break;
      case 'f':
        break;
      case 'g':
        break;
      case 'h':
        iVar10 = FUN_00209280(param_1,0x68);
        if (iVar10 == 0) {
          return (uint *)0x0;
        }
        uVar6 = FUN_0020a538(param_1,0);
        puVar4 = (uint *)FUN_00208880(param_1,0xf,uVar6,0);
        return puVar4;
      case 'i':
        break;
      case 'j':
        break;
      case 'k':
        break;
      case 'l':
        break;
      case 'm':
        break;
      case 'n':
        break;
      case 'o':
        break;
      case 'p':
        break;
      case 'q':
        break;
      case 'r':
        break;
      case 's':
        break;
      case 't':
        break;
      case 'u':
        break;
      case 'v':
        iVar10 = FUN_00209280(param_1,0x76);
        if (iVar10 == 0) {
          return (uint *)0x0;
        }
        uVar6 = FUN_0020a538(param_1,0);
        puVar4 = (uint *)FUN_00208880(param_1,0x10,uVar6,0);
        return puVar4;
      }
      return (uint *)0x0;
    }
    if (*pcVar8 != 'G') {
      return (uint *)0x0;
    }
    *(char **)(param_1 + 0xc) = pcVar8 + 1;
    bVar2 = pcVar8[1];
    if (bVar2 == 0) {
      return (uint *)0x0;
    }
    *(char **)(param_1 + 0xc) = pcVar8 + 2;
    if (bVar2 == 0x52) {
      uVar6 = FUN_0020b4dc();
      puVar4 = (uint *)FUN_00208880(param_1,0x14,uVar6,0);
      return puVar4;
    }
    if (bVar2 < 0x53) {
      if (bVar2 != 0x41) {
        return (uint *)0x0;
      }
      uVar6 = FUN_0020a538(param_1,0);
      puVar4 = (uint *)FUN_00208880(param_1,0x15,uVar6,0);
      return puVar4;
    }
    if (bVar2 == 0x56) {
      uVar6 = FUN_0020b4dc();
      puVar4 = (uint *)FUN_00208880(param_1,0x13,uVar6,0);
      return puVar4;
    }
    if (bVar2 != 0x72) {
      return (uint *)0x0;
    }
    iVar10 = FUN_00208a84();
    if (iVar10 < 2) {
      return (uint *)0x0;
    }
    cVar3 = **(char **)(param_1 + 0xc);
    if (cVar3 == '\0') {
      return (uint *)0x0;
    }
    pcVar8 = *(char **)(param_1 + 0xc) + 1;
    *(char **)(param_1 + 0xc) = pcVar8;
    if (cVar3 != '_') {
      return (uint *)0x0;
    }
    iVar10 = iVar10 + -1;
    iVar18 = 0;
    do {
      if (*pcVar8 == '\0') {
        return (uint *)0x0;
      }
      if (*pcVar8 == '$') {
        cVar3 = pcVar8[1];
        if (cVar3 == 'S') {
          uVar6 = 0x2f;
        }
        else if (cVar3 == '_') {
          uVar6 = 0x2e;
        }
        else {
          if (cVar3 != '$') {
            return (uint *)0x0;
          }
          uVar6 = 0x24;
        }
        iVar12 = *(int *)(param_1 + 0x14);
        if (*(int *)(param_1 + 0x18) <= iVar12) {
LAB_0020ab94:
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
          return (uint *)0x0;
        }
        iVar7 = *(int *)(param_1 + 0x10);
        iVar16 = iVar7 + iVar12 * 0xc;
        *(int *)(param_1 + 0x14) = iVar12 + 1;
        if (iVar16 == 0) goto LAB_0020ab94;
        *(undefined4 *)(iVar16 + 4) = uVar6;
        iVar17 = -2;
        pcVar8 = (char *)(*(int *)(param_1 + 0xc) + 2);
        *(undefined4 *)(iVar7 + iVar12 * 0xc) = 0x39;
        *(char **)(param_1 + 0xc) = pcVar8;
      }
      else {
        iVar17 = 0;
        pcVar11 = pcVar8;
        while (iVar17 = iVar17 + 1, iVar17 < iVar10) {
          pcVar11 = pcVar11 + 1;
          if ((*pcVar11 == '\0') || (*pcVar11 == '$')) break;
        }
        iVar16 = FUN_00208a1c(param_1,pcVar8);
        pcVar8 = (char *)(*(int *)(param_1 + 0xc) + iVar17);
        *(char **)(param_1 + 0xc) = pcVar8;
        if (iVar16 == 0) {
          return (uint *)0x0;
        }
        iVar17 = -iVar17;
      }
      iVar10 = iVar10 + iVar17;
      if ((iVar18 != 0) && (iVar16 = FUN_00208880(param_1,0x38), iVar16 == 0)) {
        return (uint *)0x0;
      }
      iVar18 = iVar16;
      if (iVar10 < 1) {
        puVar4 = (uint *)FUN_00208880(param_1,0x37,iVar16,0);
        return puVar4;
      }
    } while( true );
  }
  puVar4 = (uint *)FUN_0020b4dc();
  if ((puVar4 != (uint *)0x0 && param_2 != 0) && ((*(uint *)(param_1 + 8) & 1) == 0)) {
    uVar9 = *puVar4;
    while (uVar9 - 0x1a < 3) {
      puVar4 = (uint *)puVar4[1];
      uVar9 = *puVar4;
    }
    if (uVar9 != 2) {
      return puVar4;
    }
    piVar14 = (int *)puVar4[2];
    iVar10 = *piVar14;
    while (iVar10 - 0x1aU < 3) {
      piVar14 = (int *)piVar14[1];
      iVar10 = *piVar14;
    }
    puVar4[2] = (uint)piVar14;
    return puVar4;
  }
  if (**(char **)(param_1 + 0xc) == '\0' || puVar4 == (uint *)0x0) {
    return puVar4;
  }
  puVar13 = puVar4;
  if (**(char **)(param_1 + 0xc) == 'E') {
    return puVar4;
  }
  do {
    uVar9 = *puVar13;
    if (uVar9 == 4) {
      puVar15 = (undefined4 *)puVar13[1];
      goto joined_r0x0020a894;
    }
    if ((uVar9 < 4) || (2 < uVar9 - 0x1a)) goto LAB_0020a5a0;
    ppuVar1 = (uint **)(puVar13 + 1);
    puVar13 = *ppuVar1;
  } while (*ppuVar1 != (uint *)0x0);
  uVar6 = 0;
LAB_0020a5a4:
  uVar6 = FUN_0020a004(param_1,uVar6);
  puVar4 = (uint *)FUN_00208880(param_1,3,puVar4,uVar6);
  return puVar4;
joined_r0x0020a894:
  if (puVar15 == (undefined4 *)0x0) goto switchD_0020a8a4_caseD_2e;
  switch(*puVar15) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    goto switchD_0020a8a4_caseD_2e;
  case 4:
    goto switchD_0020a8a4_caseD_2e;
  case 5:
    goto switchD_0020a8a4_caseD_2e;
  case 6:
    goto switchD_0020a8a4_caseD_2e;
  case 7:
    goto LAB_0020a5a0;
  case 8:
    goto LAB_0020a5a0;
  case 9:
    goto switchD_0020a8a4_caseD_2e;
  case 10:
    goto switchD_0020a8a4_caseD_2e;
  case 0xb:
    goto switchD_0020a8a4_caseD_2e;
  case 0xc:
    goto switchD_0020a8a4_caseD_2e;
  case 0xd:
    goto switchD_0020a8a4_caseD_2e;
  case 0xe:
    goto switchD_0020a8a4_caseD_2e;
  case 0xf:
    goto switchD_0020a8a4_caseD_2e;
  case 0x10:
    goto switchD_0020a8a4_caseD_2e;
  case 0x11:
    goto switchD_0020a8a4_caseD_2e;
  case 0x12:
    goto switchD_0020a8a4_caseD_2e;
  case 0x13:
    goto switchD_0020a8a4_caseD_2e;
  case 0x14:
    goto switchD_0020a8a4_caseD_2e;
  case 0x15:
    goto switchD_0020a8a4_caseD_2e;
  case 0x16:
    goto switchD_0020a8a4_caseD_2e;
  case 0x17:
    goto switchD_0020a8a4_caseD_2e;
  case 0x18:
    goto switchD_0020a8a4_caseD_2e;
  case 0x19:
    goto switchD_0020a8a4_caseD_2e;
  case 0x1a:
    goto switchD_0020a8a4_caseD_2e;
  case 0x1b:
    goto switchD_0020a8a4_caseD_2e;
  case 0x1c:
    goto switchD_0020a8a4_caseD_2e;
  case 0x1d:
    goto switchD_0020a8a4_caseD_2e;
  case 0x1e:
    goto switchD_0020a8a4_caseD_2e;
  case 0x1f:
    goto switchD_0020a8a4_caseD_2e;
  case 0x20:
    goto switchD_0020a8a4_caseD_2e;
  case 0x21:
    goto switchD_0020a8a4_caseD_2e;
  case 0x22:
    goto switchD_0020a8a4_caseD_2e;
  case 0x23:
    goto switchD_0020a8a4_caseD_2e;
  case 0x24:
    goto switchD_0020a8a4_caseD_2e;
  case 0x25:
    goto switchD_0020a8a4_caseD_2e;
  case 0x26:
    goto switchD_0020a8a4_caseD_2e;
  case 0x27:
    goto switchD_0020a8a4_caseD_2e;
  case 0x28:
    goto switchD_0020a8a4_caseD_2e;
  case 0x29:
    goto switchD_0020a8a4_caseD_2e;
  case 0x2a:
    goto switchD_0020a8a4_caseD_2e;
  case 0x2b:
    goto switchD_0020a8a4_caseD_2e;
  case 0x2c:
    goto switchD_0020a8a4_caseD_2e;
  case 0x2d:
    goto switchD_0020a8a4_caseD_2e;
  case 0x2e:
LAB_0020a5a0:
    uVar6 = 0;
    goto LAB_0020a5a4;
  default:
    goto switchD_0020a8a4_caseD_2e;
  }
  puVar15 = (undefined4 *)puVar15[2];
  goto joined_r0x0020a894;
switchD_0020a8a4_caseD_2e:
  uVar6 = 1;
  goto LAB_0020a5a4;
}


