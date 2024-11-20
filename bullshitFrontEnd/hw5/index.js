fetch("profile.json")
    .then(response => response.json())
    .then(data => {
      document.getElementById("name").textContent = data.name;
      document.getElementById("status").textContent = data.status;
      document.getElementById("email").innerHTML = `<a href="mailto:${data.email}">${data.email}</a>`;
      document.getElementById("phone").textContent = data.phoneNUmber;

      const skillsContainer = document.getElementById("skills");
      data.lernAndSkill.forEach(skill => {
        const skillHTML = `
          <div class="w3-light-grey w3-round-xlarge w3-small">
            <div class="w3-container w3-center w3-round-xlarge w3-teal" style="width:70% pb-10">
              ${skill.name}
            </div>
          </div>
        `;
        skillsContainer.insertAdjacentHTML("beforeend", skillHTML);
      });

      const educationContainer = document.getElementById("education");
      data.lernAndSkill.forEach(skill => {
        const educationHTML = `
          <div class="w3-container">
            <h5 class="w3-opacity"><b>${skill.name}</b></h5>
            <p>${skill.description}</p>
            <hr>
          </div>
        `;
        educationContainer.insertAdjacentHTML("beforeend", educationHTML);
      });

    })
    .catch(error => console.error("Error loading JSON data:", error));