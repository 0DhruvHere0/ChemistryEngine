Current Scope:

ChemEngine
│
├── Phase 1 : Foundation (Completed)
│   ├── Element
│   ├── PeriodicTable
│   ├── OxidationStates
│   ├── Atom
│   ├── Bond
│   ├── Molecule
│   └── Testing
│
├── Phase 2 : Formula Parser
│   │
│   ├── Formula Tokenizer
│   │     H2O
│   │     NH3
│   │     CO2
│   │
│   ├── Parentheses Parser
│   │     Ca(OH)2
│   │     Al2(SO4)3
│   │
│   ├── Nested Parentheses
│   │     K4[Fe(CN)6]   
│   │
│   ├── Formula Object
│   │     element → count
│   │
│   ├── Formula Validation
│   │
│   └── Tests
│
└── Phase 3 : Reaction Engine
    │
    ├── Reaction Parser
    │     H2 + O2 -> H2O
    │
    ├── Reactant Parser
    │
    ├── Product Parser
    │
    ├── Reaction Database
    │
    ├── Rule Engine
    │     synthesis
    │     decomposition
    │     displacement
    │     combustion
    │
    ├── Condition Checking
    │     catalyst
    │     temperature
    │     pressure
    │
    ├── Product Prediction
    │
    ├── Equation Balancing (optional)
    │
    ├── Validation
    │
    └── Tests


Future Scopes:

ChemEngine v2
│
├── Molecular Mass
├── Empirical Formula
├── Percent Composition
├── Lewis Structures
├── SMILES Support
├── Geometry (VSEPR)
├── Thermodynamics
├── Kinetics
├── Organic Reaction Engine
├── Spectroscopy
└── ML-based Prediction
