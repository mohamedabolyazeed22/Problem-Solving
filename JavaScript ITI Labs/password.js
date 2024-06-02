const passwords = {
  'icon1': 'password123',
  'icon2': 'mysecretpassword',
  'icon3': 'securepassword',
  'icon4': 'anotherpassword'
};

function showPassword(iconId, platform) {
  const password = passwords[iconId];
  const tableBody = document.getElementById('passwordTableBody');
  const newRow = document.createElement('tr');

  const platformCell = document.createElement('td');
  platformCell.textContent = platform;

  const passwordCell = document.createElement('td');
  passwordCell.textContent = password;

  newRow.appendChild(platformCell);
  newRow.appendChild(passwordCell);
  tableBody.appendChild(newRow);
}
