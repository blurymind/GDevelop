// Automatically generated by GDevelop.js/scripts/generate-types.js
declare class gdInstructionMetadata {
  constructor(): void;
  getFullName(): string;
  getDescription(): string;
  getSentence(): string;
  getGroup(): string;
  getIconFilename(): string;
  getSmallIconFilename(): string;
  getHelpPath(): string;
  canHaveSubInstructions(): boolean;
  getParameter(index: number): gdParameterMetadata;
  getParametersCount(): number;
  getParameters(): gdVectorParameterMetadata;
  getUsageComplexity(): number;
  isHidden(): boolean;
  isPrivate(): boolean;
  setCanHaveSubInstructions(): gdInstructionMetadata;
  setHelpPath(helpPath: string): gdInstructionMetadata;
  setHidden(): gdInstructionMetadata;
  setPrivate(): gdInstructionMetadata;
  addParameter(type: string, description: string, optionalObjectType?: string, parameterIsOptional?: boolean): gdInstructionMetadata;
  addCodeOnlyParameter(type: string, supplementaryInformation: string): gdInstructionMetadata;
  setDefaultValue(defaultValue: string): gdInstructionMetadata;
  setParameterLongDescription(longDescription: string): gdInstructionMetadata;
  useStandardOperatorParameters(type: string): gdInstructionMetadata;
  useStandardRelationalOperatorParameters(type: string): gdInstructionMetadata;
  markAsSimple(): gdInstructionMetadata;
  markAsAdvanced(): gdInstructionMetadata;
  markAsComplex(): gdInstructionMetadata;
  getCodeExtraInformation(): gdExtraInformation;
  delete(): void;
  ptr: number;
};