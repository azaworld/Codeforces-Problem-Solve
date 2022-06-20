describe('openhrm.cy.js', () => {
 
  it('should login', () => {
    cy.visit('http://ieims-qa.innovatorslab.net:8000/auth/realms/IEIMS/protocol/openid-connect/auth?client_id=board-reg-frontend&scope=openid%20email%20profile&response_type=code&redirect_uri=http%3A%2F%2Fieims-qa.innovatorslab.net%3A3001%2Fapi%2Fauth%2Fcallback%2Fkeycloak&state=byFCgA5ttpdsylPqPTbAatnMhZFonmZwLclj6Sh4PbA&code_challenge=G7e3OPaCLRuCpc1V0x2HpQKwKCfbhxL67y4TUIzm3jM&code_challenge_method=S256')
    cy.get('#username').type('tasfik')
    cy.get('#password').type('tasfik')
    cy.get('#kc-login').click()
    cy.get('.button').click()
  })

})
